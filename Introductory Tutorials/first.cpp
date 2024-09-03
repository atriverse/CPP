#include<iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}
int main()
{
    int x,y,z;
    x=2;
    y=8;
    cout<<"Enter the numbers which is to be added"<<endl;
    cin>>z;
    cout<<sum(x,y);
    return 0;
}