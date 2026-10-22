#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     while(cin>>t && t!=0){
     int m,n;
     cin>>m>>n;
     while(t--)
     {
        int x,y;
        cin>>x>>y;
        if(m==x || n==y)
        {
            cout<<"divisa"<<endl;
        }
        else if(x<m && y>n)
        {
            cout<<"NO"<<endl;
        }
        else if(x<m && y<n)
        {
            cout<<"SO"<<endl;
        }
        else if(x>m && y>n){
            cout<<"NE"<<endl;
        }
        else{
            cout<<"SE"<<endl;
        }
     }
    }
    return 0;
}