#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3]={a,b,c};
    sort(arr,arr+3,greater<int>());
    cout<<max(0,arr[0]-(arr[1]+arr[2]-1))<<endl;

    return 0;
}
