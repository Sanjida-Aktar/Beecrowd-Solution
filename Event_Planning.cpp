#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,b,h,w;
     while(cin>>n>>b>>h>>w){
     int p,a;
     int cal,min_cost=INT_MAX;
     for(int i=0; i<h; i++)
     {
        cin>>p;

        for(int j=0; j<w; j++)
        {
            cin>>a;
            if(a>=n)
            {
                cal=p*n;
                if(min_cost>cal){
                    min_cost= cal;
                }
                
            }

        }
     }
     if(min_cost== INT_MAX || min_cost>b)
     {
        cout<<"stay home"<<endl;
     }
     else{
        cout<<min_cost<<endl;
     }
    }
    return 0;
}