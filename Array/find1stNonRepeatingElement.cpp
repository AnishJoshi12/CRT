//find the first non repeating elements
#include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={1,2,3,2,1,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
unordered_map<int,int> freq;
for(int i=0;i<n;i++)
{
    freq[arr[i]]++;
}
bool found=false;
for(int i=0;i<n;i++)
{
    if(freq[arr[i]]==1)
    {
        cout<<arr[i]<<endl;
        found=true;
        break;
    }
}
if(!found)
{
    cout<<"No repeating";
}
return 0;
}
