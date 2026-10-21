#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     int j=1;
     while (t--)
     {
        int l,w,h;
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)
        {
            cout<<"Case "<<j<<": good"<<endl;
        }
        else{
            cout<<"Case "<<j<<": bad"<<endl;
        }

        j++;
     }
     
    return 0;
}