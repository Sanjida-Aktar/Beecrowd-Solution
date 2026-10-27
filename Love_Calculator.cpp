#include<bits/stdc++.h>
using namespace std;
int calculate(int n){
    while(n>=10){
    int sum=0;
while(n!=0)
{
    sum+= n%10;
    n= n/10;
}
   n= sum;
}
return n;
}
int main(){
     string name1,name2;
     int x,y;
     while(getline(cin,name1) && getline(cin,name2)){
    int sum1=0,sum2=0;
    for(int i=0;i<name1.length();i++){
        if((name1[i]>='a' && name1[i]<='z' )||(name1[i]>='A' && name1[i]<='Z' )){
        sum1+=tolower(name1[i])-96;
        }
    }
    for(int i=0;i<name2.length();i++){
        if((name2[i]>='a' && name2[i]<='z' )||(name2[i]>='A' && name2[i]<='Z' )){
        sum2+=tolower(name2[i])-96;
        }
    }
    // cout<<sum1<<sum2<<endl;
    x=calculate(sum1);
    y= calculate(sum2);
    // cout<<x<<y<<endl;
    double ans;
    
    if(x>y){
        ans= ((double)y/x)*100;
        cout<<fixed<<setprecision(2)<<ans<<" %"<< endl;
    }
   else if(x<y){
        ans= ((double)x/y)*100;
        cout<<fixed<<setprecision(2)<<ans<<" %"<< endl;
    }
    else if(x==y){
        cout<<"100.00 %"<< endl;
    }
}
    
    
    return 0;
}