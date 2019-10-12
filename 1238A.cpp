#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    bool flag;
    for(long long i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = true;
            break;
        }
    }


        if (flag == false)
          return true;
        else
          return false;

}
int main()
{
    int testCase,lastDigit;
    scanf("%d",&testCase);
    long long x,y,sub;
    for(int i=0;i<testCase;i++)
    {
        scanf("%lld %lld",&x,&y);
        if((x-y)>1)
        {
            sub=x-y;
            //lastDigit=sub%10;
            if(sub%11==0 || sub%2==0 || sub%3==0 || sub%5==0 || sub%7==0)
            {
                printf("YES\n");
            }
               // bool test =isPrime(sub);
            else if(isPrime(sub)==true)
                printf("YES\n");
           // else if(isPrime(sub) == false)
                //printf("NO\n");
            else
                printf("NO\n");


        }
        else
            printf("NO\n");

    }
   // cout<<x<<endl;


    return 0;
}
