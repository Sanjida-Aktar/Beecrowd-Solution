#include<bits/stdc++.h>
using namespace std;
int main(){
     string sentence;
    while(getline(cin,sentence))
    {
    int count=1;
    for(int i=0;i<sentence.length();i++){
        if(sentence[i]==' ' &&  isalpha(sentence[i+1])){
            count++;
        }
    }
   
    cout<<count<<endl;
}
    return 0;
}