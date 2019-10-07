#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s2;
    cin>>s>>s2;
    int length=s.size();
    int lengths2=s2.size();
    int arr[length],arr1[length],check=0;
    for(int i=0;i<length;i++)
    {
        arr[i]=s[i]-48;
        arr1[i]=s2[i]-48;
    }
    sort(arr,arr+length);

    if(arr[0]==0)
    {
        for(int i=1;i<length;i++)
        {
            if(arr[i]!=0){
                swap(arr[0],arr[i]);
                check=1;
                    break;
            }
        }
    }

    int Count=0;
    for(int i=0;i<length;i++)
    {
        if(arr[i]==arr1[i])
            Count++;
    }
//cout<<Count<<endl;
    if(Count==length&&length==lengths2)
        printf("OK\n");
        else
            cout<<"WRONG_ANSWER"<<endl;
    return 0;
}
