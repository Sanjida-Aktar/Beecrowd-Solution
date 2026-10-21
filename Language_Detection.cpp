#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     int j=1;
     while (cin>>s)
     {
        if(s=="#")
        break;
        else if(s=="HELLO"){
            cout<<"Case "<<j<<": ENGLISH"<<endl;
        }
        else if(s=="HOLA"){
            cout<<"Case "<<j<<": SPANISH"<<endl;
        }
        else if(s=="HALLO"){
            cout<<"Case "<<j<<": GERMAN"<<endl;
        }
        else if(s=="BONJOUR"){
            cout<<"Case "<<j<<": FRENCH"<<endl;
        }
        else if(s=="CIAO"){
            cout<<"Case "<<j<<": ITALIAN"<<endl;
        }
        else if(s=="ZDRAVSTVUJTE"){
            cout<<"Case "<<j<<": RUSSIAN"<<endl;
        }
        else {
    cout << "Case " << j << ": UNKNOWN" << endl;
}

        j++;
  }
     
    return 0;
}