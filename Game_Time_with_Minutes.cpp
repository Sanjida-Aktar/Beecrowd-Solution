#include<bits/stdc++.h>
using namespace std;
int main(){
     int t1, s1, t2, s2;
        cin>>t1>>s1>>t2>>s2;
        int total1 = t1*60+s1;
        int total2 = t2*60+s2;
        int diff = total2-total1;
        if(diff<=0)
        {
            diff+=24*60;
        }
        cout<<"O JOGO DUROU "<<diff/60<<" HORA(S) E "<<diff%60<<" MINUTO(S)"<<endl;
    return 0;
}