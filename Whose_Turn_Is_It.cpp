#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
        cin>>t;
        while(t--)
        {
            string s,ch;
            cin>>s>>ch;
            string s1,ch1;
            cin>>s1>>ch1;
            int n,m;
            cin>>n>>m;
            int add = n + m;
            if (add%2==0)
            {
                if(ch=="PAR")
                {
                    cout<<s<<endl;
                }
                else
                {
                    cout<<s1<<endl;
                }
            }
            else
            {
                if(ch=="IMPAR")
                {
                    cout<<s<<endl;
                }
                else
                {
                    cout<<s1<<endl;
                }
            }
        }
    return 0;
}