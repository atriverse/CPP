/*
Abstract base classes in C++ can only be used as base classes. Thus, they are allowed to have virtual member functions without definitions.

A cache is a component that stores data so future requests for that data can be served faster. The data stored in a cache might be the results of an earlier computation, or the duplicates of data stored elsewhere. A cache hit occurs when the requested data can be found in a cache, while a cache miss occurs when it cannot. Cache hits are served by reading data from the cache which is faster than recomputing a result or reading from a slower data store. Thus, the more requests that can be served from the cache, the faster the system performs.

One of the popular cache replacement policies is: "least recently used" (LRU). It discards the least recently used items first.

For example, if a cache with a capacity to store 5 keys has the following state(arranged from most recently used key to least recently used key) -

5 3 2 1 4
Now, If the next key comes as 1(which is a cache hit), then the cache state in the same order will be -

1 5 3 2 4
Now, If the next key comes as 6(which is a cache miss), then the cache state in the same order will be -

6 1 5 3 2
You can observe that 4 has been discarded because it was the least recently used key and since the capacity of cache is 5, it could not be retained in the cache any longer.

Given an abstract base class Cache with member variables and functions:

mp - Map the key to the node in the linked list
cp - Capacity
tail - Double linked list tail pointer
head - Double linked list head pointer
set() - Set/insert the value of the key, if present, otherwise add the key as the most recently used key. If the cache has reached its capacity, it should replace the least recently used key with a new key.
get() - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.

You have to write a class LRUCache which extends the class Cache and uses the member functions and variables to implement an LRU cache.

Input Format

First line of input will contain the  number of lines containing  or  commands followed by the capacity  of the cache.
The following  lines can either contain  or  commands.
An input line starting with  will be followed by a  to be found in the cache. An input line starting with  will be followed by the  and  respectively to be inserted/replaced in the cache.

Constraints

1<=N<=500000
1<=M<=1000
1<=key<=20
1<=value<=2000

Output Format

The code provided in the editor will use your derived class LRUCache to output the value whenever a get command is encountered.

Sample Input

3 1
set 1 2
get 1
get 2
Sample Output

2
-1
Explanation

Since, the capacity of the cache is 1, the first set results in setting up the key 1 with it's value 2. The first get results in a cache hit of key 1, so 2 is printed as the value for the first get. The second get is a cache miss, so -1 is printed.
*/
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

/**
 * Represents a node in a doubly-linked list used for an LRU cache.
 * Each node contains a key-value pair, as well as pointers to the
 * previous and next nodes in the list.
 */
struct Node {
    Node* next;   ///< Pointer to the next node in the list.
    Node* prev;   ///< Pointer to the previous node in the list.
    int value;    ///< The value associated with the key.
    int key;      ///< The key associated with the value.

    /**
     * Constructs a new node with the given previous and next nodes,
     * key, and value.
     * @param p The previous node in the list.
     * @param n The next node in the list.
     * @param k The key for the new node.
     * @param val The value for the new node.
     */
    Node(Node* p, Node* n, int k, int val) : prev(p), next(n), key(k), value(val) {}

    /**
     * Constructs a new node with the given key and value, and
     * initializes the previous and next pointers to NULL.
     * @param k The key for the new node.
     * @param val The value for the new node.
     */
    Node(int k, int val) : prev(NULL), next(NULL), key(k), value(val) {}
};

/**
 * Represents the base class for an LRU (Least Recently Used) cache.
 * The cache stores key-value pairs and has a fixed capacity. When the
 * capacity is reached, the least recently used item is evicted to make
 * room for a new item.
 * 
 * The derived class must implement the `set` and `get` functions to
 * handle adding, updating, and retrieving items in the cache.
 */
class Cache {
protected:
    /// A map that associates keys with their corresponding nodes in the linked list.
    std::map<int, Node*> mp;

    /// The maximum capacity of the cache.
    int cp;

    /// A pointer to the tail of the doubly-linked list.
    Node* tail;

    /// A pointer to the head of the doubly-linked list.
    Node* head;

    /**
     * Sets a key-value pair in the cache.
     * @param key The key to set.
     * @param value The value to associate with the key.
     */
    virtual void set(int key, int value) = 0;

    /**
     * Retrieves the value associated with the given key from the cache.
     * @param key The key to retrieve.
     * @return The value associated with the key, or -1 if the key is not found.
     */
    virtual int get(int key) = 0;
};

/**
 * Represents an LRU (Least Recently Used) cache implementation that inherits from the base `Cache` class.
 * The `LRUCache` class manages a cache of key-value pairs with a fixed capacity. When the capacity is reached,
 * the least recently used item is evicted to make room for a new item.
 * 
 * The `set` method adds or updates a key-value pair in the cache, while the `get` method retrieves the value
 * associated with a given key. The cache maintains a doubly-linked list to track the order of the items,
 * and a map to quickly locate the nodes in the list.
 */
class LRUCache: public Cache{
    private:
    int count;
    public:
    /**
     * Constructs an LRUCache object with the specified capacity.
     * @param cp The maximum capacity of the cache.
     */
    LRUCache(int cp){
        this->cp=cp;
        count=0;
    }
    /**
     * Destructor for the LRUCache class.
     * Frees the memory used by the doubly-linked list and the map that stores the key-value pairs.
     */
    ~LRUCache(){
        Node* temp=this->head;
        while(temp->next){
            if(temp->prev)
                delete temp->prev;
            temp=temp->next;
        }
        delete temp;
        mp.clear();
    }
    /**
     * Sets a key-value pair in the LRU cache.
     * If the key already exists, the value is updated and the item is moved to the most recently used position.
     * If the cache is at capacity, the least recently used item is evicted to make room for the new item.
     *
     * @param key The key to set.
     * @param value The value to associate with the key.
     */
    void set(int a,int b){
        if(!mp[a]){
            if(count==0){
            Node* n=new Node(a,b);
            mp[a]=n;
                tail=head=n;
            }else if(count<cp){
                Node* n=new Node(a,b);
                mp[a]=n;
                tail->next=n;
                Node* temp=tail;
                tail=tail->next;
                tail->prev=temp;
            }else{
                mp.erase(head->key);
                head->value=b;
                head->key=a;
                mp[head->key]=head;
            }
            count++;
        }else{
            Node* temp=mp[a];
            mp[tail->key]=temp;
            mp[a]=tail;
            temp->value=tail->value;
            temp->key=tail->key;
            tail->value=b;
            tail->key=a;
            
        }
        
    }
    /**
     * Retrieves the value associated with the given key in the LRU cache.
     *
     * @param key The key to look up in the cache.
     * @return The value associated with the key, or -1 if the key is not found in the cache.
     */
    int get(int key){
        return mp[key]?mp[key]->value:-1;
    }
};

/**
 * The main function that drives the LRU cache implementation.
 * It reads in the number of commands and the cache capacity,
 * then processes a series of "get" and "set" commands on the cache.
 * 
 * @param n The number of commands to process.
 * @param capacity The capacity of the LRU cache.
 * @return 0 on successful completion.
 */

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
