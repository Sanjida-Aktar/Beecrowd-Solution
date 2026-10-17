#include<bits/stdc++.h>
using namespace std;
int main(){
     float a,b,c,d;
        cin>>a>>b>>c>>d;
        float average=(a*2+b*3+c*4+d*1)/10;
        cout<<fixed<<setprecision(1)<<"Media: "<<average<<endl;
        if(average>=7.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else if(average<5.0)
        {
            cout<<"Aluno reprovado."<<endl;
        }
        else
        {
            cout<<"Aluno em exame."<<endl;
            float e;
            cin>>e;
            cout<<fixed<<setprecision(1)<<"Nota do exame: "<<e<<endl;
            average=(average+e)/2;
            if(average>=5.0)
            {
                cout<<"Aluno aprovado."<<endl;
            }
            else
            {
                cout<<"Aluno reprovado."<<endl;
            }
            cout<<fixed<<setprecision(1)<<"Media final: "<<average<<endl;
        }
    return 0;
}