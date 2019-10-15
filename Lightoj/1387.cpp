#include<bits/stdc++.h>
using namespace std;
//typedef LL long long
int main()
{
   long long sum;
   int testCase,k,N;
   string str;
   scanf("%d",&testCase);
   for(int i=1;i<=testCase;i++)
   {
       printf("Case %d:\n",i);
       sum=0;
       scanf("%d",&N);
        while(N--)
        {
            cin>>str;
            if(str =="donate")
            {
                scanf("%d",&k);
                sum=sum+k;
            }
            else
                cout<<sum<<endl;
        }
   }


    return 0;
}
