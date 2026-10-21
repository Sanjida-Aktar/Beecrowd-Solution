#include<bits/stdc++.h>
using namespace std;
int main(){
     string sentence;
    getline(cin,sentence);
    int count[60]={0};
    for(int i=0; i<sentence.length(); i++)
    {
        if(sentence[i]>='A' && sentence[i]<='Z')
        {
            count[sentence[i]]++;
        }
        else if(sentence[i]>='a' && sentence[i]<='z')
        {
            count[sentence[i]]++;
        }
    }
    int max_val=0;
    for(int i=0; i<60; i++)
    {
        max_val= max(max_val,count[i]);
    }
    cout<<max_val<<endl;
    return 0;
}