#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin>>t;
     int j=1;
        while(t--){
           
            int a,b;
            cin>>a;
            cin>>b;
            int sum=0;
            for(int i=a;i<=b;i++){
                if(i%2!=0){
                    sum+=i;
                }
            }
            cout<<"Case "<<j<<": "<<sum<<endl;
            j+=1;
        }
    return 0;
}