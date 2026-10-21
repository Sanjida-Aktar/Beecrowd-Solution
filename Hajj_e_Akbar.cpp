#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     int j=1;
     while(cin>>s)
     {
        if(s=="*"){
            return 0;
        }
     else if(s=="Hajj")
     {
        cout<<"Case "<<j<<": Hajj-e-Akbar"<<endl;
     }
     else{
        cout<<"Case "<<j<<": Hajj-e-Asghar"<<endl;
     }
     j++;
    }
    return 0;
}