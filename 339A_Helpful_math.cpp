#include<bits/stdc++.h>
using namespace std;

int main()
{
    int length,Count1=0,Count2=0,Count3=0;
    string s;
    cin>>s;
    length =s.size();

    for(int i=0;i<length;i++)
    {
        if(s[i]=='1'){
            Count1=Count1+1;}
        else if(s[i]=='2')
            Count2=Count2+1;
        else if(s[i]=='3')
            Count3=Count3+1;
    }
    int i;
    int sum=Count1+Count2+Count3;
    for( i=1;i<=sum;i++){
        if(Count1>=1){

            if(i==sum)
            {
                cout<<"1"<<endl;
            }
            else
                cout<<"1+";
            Count1--;}
        else if(Count2>=1){
                if(i==sum)
            {
                cout<<"2"<<endl;
            }
            else
            cout<<"2+";
            Count2--;
        }

        else if(Count3>=1){
                if(i==sum)
            {
                cout<<"3"<<endl;
            }
            else
            cout<<"3+";
            Count3--;
        }
    }

        return 0;
}

