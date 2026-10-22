#include<bits/stdc++.h>
using namespace std;
void number_of_type(string s,int j)
{
    
    int count=0;
    for(int i=0; i<s.length(); i++)
    {
        
        if(s[i]=='a'||s[i]=='d' || s[i]=='g' || s[i]=='j' || s[i]=='m' || s[i]=='p' || s[i]=='t' ||s[i]=='w' ||s[i]==' ')
        {
            count++;
        }
        
        else if(s[i]=='b'||s[i]=='e' || s[i]=='h' || s[i]=='k' || s[i]=='n' || s[i]=='q' || s[i]=='u' ||s[i]=='x')
        {
            count+=2;
        }
        else if(s[i]=='c'||s[i]=='f' || s[i]=='i' || s[i]=='l' || s[i]=='o' || s[i]=='r' || s[i]=='v' ||s[i]=='y')
        {
            count+=3;
        }
        else{
            count+=4;
        }
    }
    cout<<"Case #"<<j<<": "<<count<<endl;
    j++;
}


int main(){
     int t;
     cin>>t;
     cin.ignore();
     for(int j=1; j<=t; j++)
     {
        string s;
        getline(cin,s);
        number_of_type(s,j);
    
    // int first[]={a,d,g,j,m,p,t,w};
    // int second[]={b,e,h,k,n,q,u,x};
    // int third[]={c,f,i,l,o,r,v,y};
    // int forth[]={s,z};
    
     }
     
    return 0;
}