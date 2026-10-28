#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     int c=1;
      while(cin>>n && n!=0)
     {
        int treat=0;
        int exq=0;
        int a;
        for(int i=0; i<n; i++){
        cin>>a;
        if(a==0){
            treat++;
        }
        else{
            exq++;
        }
    }
    int res= exq-treat;
    
    cout<<"Case "<<c++<<": "<<res<<endl;
    
     }
     
    return 0;
}