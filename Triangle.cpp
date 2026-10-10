#include<bits/stdc++.h>
using namespace std;
int check(int a,int b,int c)
{
            if(a+b>c && a+c>b && b+c>a )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
     int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(check(a,b,c) || check(a,b,d) || check(a,c,d) || check(b,c,d))
    {
        cout<<"S"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }
    return 0;
}