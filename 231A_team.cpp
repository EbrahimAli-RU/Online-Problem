#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,Petya,Vasya,Tonya,Count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>Petya>>Vasya>>Tonya;
            if(Petya+Vasya+Tonya>=2)
                Count=Count+1;

    }
        cout<<Count<<endl;

        return 0;
}
