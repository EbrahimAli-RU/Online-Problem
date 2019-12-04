#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,Min=0,Max=0;
    cin>>n;
    cin>>a;
    Min=a;Max=a;
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a);
        if(Max<a)
            Max=a;
        if(Min>a)
            Min=a;
    }
    cout<<(Max-Min+1)-n<<endl;

    return 0;
}
