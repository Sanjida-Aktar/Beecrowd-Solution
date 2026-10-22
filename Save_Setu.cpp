#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     int total=0;
     while (t--)
     {
         string s;
         cin>>s;
         if(s=="donate")
         {
            int n;
            cin>>n;
            total+=n;
         }
         else if(s=="report"){
            cout<<total<<endl;
         }
     }
     
    return 0;
}