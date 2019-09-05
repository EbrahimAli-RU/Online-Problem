#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,x1[105],y1[105],Merge[205];
    cin>>n;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>x1[i];
    }
    cin>>y;
    for(int i=0;i<y;i++)
    {
        cin>>y1[i];
    }

    for(int i=0;i<x;i++)
    {
        Merge[i]=x1[i];
    }

    for(int i=0, k=x; k<x+y && i<y; i++, k++)
	{
		Merge[k]=y1[i];
	}
	sort(Merge,Merge+x+y);
     int check=1;
     for(int i=0;i<x+y;i++)
     {
         if(Merge[i]==check){
            check++;
            }
     }
     check--;
     if(check==n)
        cout<<"I become the guy."<<endl;
        else
            cout<<"Oh, my keyboard!"<<endl;

    return 0;
}

