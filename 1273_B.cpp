#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,Count=0,check=0;
    cin>>n;
    int enter[n],exit[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&enter[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&exit[i]);
    }
    int checked[n];
        for(int i=0,j=0;i<n&&j<n;)
        {
            if(1==checked[enter[i]])
                i++;
            else if(enter[i]==exit[j])
            {
                i++;j++;
            }
            else
            {
                Count++;
                checked[exit[j]]=1;
                j++;
            }

        }
    cout<<Count<<endl;
    return 0;
}
