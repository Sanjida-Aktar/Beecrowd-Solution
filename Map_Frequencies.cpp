#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     while(cin>>s)
     {
        map<int,int>m;
        for(char i: s){
          m[i]++;      
        }
        vector<pair<int,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end());
        for(auto it=v.begin(); it!= v.end(); it++){
            cout<<it->first<<" "<<it->second<<endl;
        }
        
     }
    return 0;
}