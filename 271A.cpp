#include<bits/stdc++.h>
using namespace std;
int arr[4];
void Distinct(int cYear)
{
    int u;
    for(int i=0;i<4;i++)
    {
        u=cYear%10;
        arr[i]=u;
        cYear=cYear/10;
    }

}
int main()
{
    int year,u,cYear;
    cin>>year;
    cYear=year;
    for(int i=1;;i++)
    {
        Distinct(year+i);
        int check=0;
        for(int j=0;j<4;j++)
        {
            for(int k=j+1;k<4;k++)
            {
                if(arr[j]==arr[k])
                {
                   // cout<<arr[j]<<" "<<arr[k]<<endl;
                    check=1;
                    continue;

                }
            }
            if(check==1)
                break;
        }
        if(check==0)
        {
            //cout<<i<<endl;
            cout<<year+i<<endl;
            break;
        }
    }



    return 0;
}
