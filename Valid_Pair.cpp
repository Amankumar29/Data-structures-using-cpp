#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b || a==c)
    {
        cout<<"YES"<<endl;
    }
    else if(b==a || b==c)
    {
        cout<<"YES"<<endl;
    }
    else if(c==a || c==b)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}