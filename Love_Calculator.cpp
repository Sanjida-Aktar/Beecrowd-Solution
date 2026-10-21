#include<bits/stdc++.h>
using namespace std;
int main(){
     string name1,name2;
    cin>>name1;
    cin>>name2;
    int sum1=0,sum2=0;
    for(int i=0;i<name1.length();i++){
        sum1+=tolower(name1[i])-96;
    }
    for(int i=0;i<name2.length();i++){
        sum2+=tolower(name2[i])-96;
    }
    
    return 0;
}