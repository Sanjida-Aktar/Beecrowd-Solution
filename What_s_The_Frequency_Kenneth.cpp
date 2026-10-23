#include<bits/stdc++.h>
using namespace std;
int main(){
     string sentence;
    while(getline(cin,sentence)){
    int count[300]={0};
    for(int i=0; i<sentence.length(); i++)
    {
        if((sentence[i]>='A' && sentence[i]<='Z')||(sentence[i]>='a' && sentence[i]<='z'))
        {
            count[sentence[i]]++;
        }
    }
    int max_val=0;
    for(int i=0; i<300; i++)
    {
        max_val= max(max_val,count[i]);
    }
     for (int i = 'A'; i <= 'Z'; i++)
        {
            if (count[i] == max_val)
            {
                cout << (char)i;
            }
        }

        for (int i = 'a'; i <= 'z'; i++)
        {
            if (count[i] == max_val)
            {
                cout << (char)i;
            }
        }

        cout << " " << max_val << endl;
    
    }
    return 0;
}