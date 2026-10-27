#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,b,h,w;
     cin>>n>>b>>h>>w;
     int p,a;
     int cal,min_cost=INT_MAX;
     for(int i=0; i<h; i++)
     {
        cin>>p;

        for(int i=0; i<=w; i++)
        {
            cin>>a;
            if(a<=n)
            {
                cal=p*n;
                if(min_cost>cal){
                    min_cost= cal;
                }
                break;
            }

        }
     }
     if(min_cost== INT_MAX || min_cost>b)
     {
        cout<<"stay home"<<endl;
     }

    return 0;
}