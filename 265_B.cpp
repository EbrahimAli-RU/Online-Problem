#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfTrees,height,totalTime=0,pre=0,hold;
    cin>>numberOfTrees;
    for(int i=0;i<numberOfTrees;i++)
    {
        scanf("%d",&height);
        hold=abs(pre-height);
        totalTime += hold+2;
        pre=height;
    }
    cout<<totalTime-1<<endl;

    return 0;
}
