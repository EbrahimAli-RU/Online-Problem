#include<bits/stdc++.h>
using namespace std;

#define MX 100000000
int main()
{
   char arr[10000];
   int Count=0,length=0;
   while(gets(arr))
   {
        length=strlen(arr);
        for(int i=0;i<length;i++)
        {
            if(arr[i]=='"')
            {
                Count++;
                if(Count%2==0)
                    printf("''");
                else
                    printf("``");
            }
            else
            printf("%c",arr[i]);
        }
        printf("\n");
   }


    return 0;
}
