#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1-i;i=i+2)
    {
        swap(arr[i],arr[n-1-i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    cout<<endl;


    return 0;
}
