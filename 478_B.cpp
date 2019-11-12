#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,n1,m1,temp,re,hold,hold1;
    ll Max=0,Min=0;
    cin>>n>>m;n1=n-m;m1=m;

    Max=(n1*(n1+1))/2;
    if(m==1){
    cout<<Max<<" "<<Max<<endl;
    }
    else{
    re=n%m;
    temp=n/m;
    hold=(temp*(temp-1))/2;
    hold1=((temp+1)*((temp+1)-1))/2;
    //m1=temp+re;
    Min=hold1*re+(m-re)*hold;

    cout<<Min<<" "<<Max<<endl;}


    return 0;
}
