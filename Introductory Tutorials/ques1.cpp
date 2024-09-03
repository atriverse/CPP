#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int possible(int z[],int a,int b,int c){
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(a+b);
    v.push_back(b+c);
    v.push_back(c+a);
    v.push_back(a+b+c);
    sort(v.begin(),v.end());
    for (int i = 0; i < 7; i++)
    {
        if(v[i]!=z[i]){
            return 0;
        }
    }
    return 1;
    
}

void solve(int z[]){
    int a=z[0];
    int b=z[1];
    int c=z[2];
    if (possible(z,a,b,c))
    {
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else if (possible(z,a,b,z[3]))
    {
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<z[3]<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
}
int main(){
    int z[7]={1,2,3,4,5,6,7};
    solve(z);
    return 0;
}