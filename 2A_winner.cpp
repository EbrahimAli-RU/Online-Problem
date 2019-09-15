#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name,winner;
    int score,n,Max=-1001;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>name>>score;
        if(score>Max)
        {
            winner=name;
            Max=score;
        }
    }

    cout<<winner;

    return 0;
}
