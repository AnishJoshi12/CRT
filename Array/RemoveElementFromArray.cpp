#include <bits/stdc++.h>
using namespace std;

int main()
{int arr[5]={1,2,3,4,5};
int element=3;
for(int i=0;i<5;i++)
{
    if(arr[i]==element)
    {
       for(int j=i;j<4;j++)
       {
        arr[j]=arr[j+1];
       }
       break;
    }
}
for(int i=0;i<4;i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}
