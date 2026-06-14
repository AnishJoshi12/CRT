// To divide the arr in to chunk of array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
int x;
vector<int> arr;
int chunk_size;
cin>>chunk_size;
while(cin>>x)
{
arr.push_back(x);
}
int size=arr.size();

for(int i=0;i<size;i=i+chunk_size)
{
    cout<<"[";
for(int j=i;j<size && j<(i+chunk_size);j++)
{
   cout<<arr[j]<<" ";
}
   cout<<"] ";
}
return 0;
}