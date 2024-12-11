#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    //Array of size n
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum+=arr[i];
    // }
    // cout<<sum;
    
    //Vectors
    // vector<string> v={"a","b","c"};
    // cout<<v.size()<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // v.push_back("d");
    // cout<<v.back()<<endl;
    // v.pop_back();
    // cout<<v.back()<<endl;
    // cout<<v.at(1)<<endl;
    // cout<<v.empty()<<endl;

    //Lists
    // list<string> l;
    // l.push_back("a");
    // l.push_back("b");
    // cout<<l.front()<<endl;
    // cout<<l.back()<<endl;
    // l.front()="c";
    // l.back()="d";
    // cout<<l.front()<<endl;
    // cout<<l.back()<<endl;
    // l.push_front("e");
    // cout<<l.front()<<endl;
    // l.push_back("f");
    // cout<<l.back()<<endl;
    // l.pop_front();
    // cout<<l.front()<<endl;
    // l.pop_back();
    // cout<<l.back()<<endl;

    //Stacks
    // stack<string> stack;
    // stack.push("a");
    // stack.push("b");
    // stack.push("c");
    // cout<<stack.top()<<endl;
    // stack.pop();
    // cout<<stack.top()<<endl;
    // cout<<stack.size()<<endl;
    // cout<<stack.empty()<<endl;
    // stack.top()="d";
    // cout<<stack.top()<<endl;

    //Queues
    // queue<string> q;
    // q.push("a");
    // q.push("b");
    // q.push("c");
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // q.front()="d";
    // cout<<q.front()<<endl;
    // q.back()="e";
    // cout<<q.back()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;

    //Deque
    // deque<string> dq={"Volvo", "BMW", "Ford", "Mazda"};
    // dq.push_back("a");
    // dq.push_back("b");
    // dq.push_back("c");
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;
    // cout<<dq.size()<<endl;
    // cout<<dq[2]<<endl;
    // dq.pop_back();
    // cout<<dq.back()<<endl;
    // cout<<dq.at(5)<<endl;
    // dq[5]="Tesla";
    // cout<<dq[5]<<endl;
    // dq.push_front("d");
    // cout<<dq.front()<<endl;
    // dq.pop_front();
    // cout<<dq.front()<<endl;

    //Sets
    // set<int> s={1,2,3,4,5,8,9,10,6,7};
    // for (int num : s) {
    //     cout << num << "\n";
    // }
    // set<int, greater<int>> s1={1,2,3,4,5,8,9,9,10,6,7};
    // for (int num : s1) {
    //     cout << num << "\n";
    // }
    // s1.insert(11);
    // cout<<*s1.find(11)<<endl;
    // s1.erase(11);
    // cout<<*s1.find(11)<<endl;

    //Maps
    map<string,int> m={ {"John", 32}, {"Adele", 45}, {"Bo", 29} };
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << "\n";
    }
    cout<<m["Johne"]<<endl;//Not preferred
    cout<<m.at("Johne")<<endl;//preferred because it checks if key is present or not and hence throws error if not present
    m.insert({"John", 33});
    cout<<m["John"]<<endl;
    m.erase("Johne");
    m.clear();
    cout<<m.empty()<<endl;
    
    return 0;
}