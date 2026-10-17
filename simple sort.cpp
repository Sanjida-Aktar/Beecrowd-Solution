#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr2[3]={a,b,c};
     int arr[3]={a,b,c};
     
       sort(arr,arr+3);
        cout<<arr[0]<<endl;
        cout<<arr[1]<<endl;
        cout<<arr[2]<<endl;
         cout<<endl;
         
         cout<<arr2[0]<<endl;
        cout<<arr2[1]<<endl;    
        cout<<arr2[2]<<endl;
        
    return 0;
}