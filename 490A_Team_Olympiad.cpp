#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[5005],Count1=0,Count2=0,Count3=0,ar[3];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            Count1++;
        else if(arr[i]==2)
            Count2++;
        else
            Count3++;
    }
    ar[0]=Count1;ar[1]=Count2;ar[2]=Count3;
    sort(ar,ar+3);
    cout<<ar[0]<<endl;
    int first=0,second=0,third=0;
    Count1=0;Count2=0;Count3=0;
    for(int j=0;j<n;j++){
         Count1=0;Count2=0;Count3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1&&Count1==0){
            arr[i]=-1;
            first=i;
            Count1=1;
            }
            else if(arr[i]==2&&Count2==0)
            {
                arr[i]=-1;
            second=i;
            Count2=1;
            }
            else if(arr[i]==3&&Count3==0)
            {
                arr[i]=-1;
            third=i;
            Count3=1;
            }

    }
    if(Count1==1&Count2==1&&Count3==1)
            {
                cout<<first+1<<" "<<second+1<<" "<<third+1<<endl;
                continue;
            }

    }


    return 0;
}
