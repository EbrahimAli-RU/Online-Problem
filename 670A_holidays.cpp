#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,f;
    cin>>n;

    //else{
    r=n/7;
    f=n%7;
    if(f==0)
        cout<<r*2<<" "<<r*2<<endl;
    else if(f==1)
        cout<<r*2<<" "<<r*2+1<<endl;
    else if(f>=2 &&f<6)
        cout<<r*2<<" "<<r*2+2<<endl;
    else if(f==6)
        cout<<r*2+1<<" "<<r*2+2<<endl;

   // }
    return 0;
}
