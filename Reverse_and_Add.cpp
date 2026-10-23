#include<bits/stdc++.h>
using namespace std;
void palindrome(long long n,int count)
{
    
    long long x= n;
    long long rev=0;
    while(n!=0){
    rev= rev*10+n%10;
    n= n/10;
    }
if(rev == x){
    cout<<count<<" "<<rev<<endl;
}
else{
    rev=rev+x;
    count ++;
    palindrome(rev,count);
}
}
int main(){
     int t;
     cin>>t;
     while (t--)
     {
        long long n;
        cin>>n;
        int count =0;
        palindrome(n,count);
     }
     
    return 0;
}