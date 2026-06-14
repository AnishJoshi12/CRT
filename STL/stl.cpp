#include <algorithm>
#include <iostream>
using namespace std;
void show(int a[], int array_size)
{
    for(int i=0;i<array_size;++i)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
}

int main()
{
//    int arr[]={3,5,1,2,4};
//    sort(begin(arr),end(arr));
//    for(int i:arr)
//    {
//     cout<<i<<" ";
//    }
//     return 0;

// int a[]={1,5,8,9,6,7,3,4,2,0};
// int asize= sizeof(a)/sizeof(a[0]);
// cout<<"Array before sorting:\n ";
// show(a,asize);
// cout<<asize<<endl;
// cout<<a+asize<<endl;
// sort(a,a+asize);
// cout<<"\nArray after sorting: \n";
// show(a ,asize);
int a[]={1,5,8,9,6,7,3,4,2,0};
int asize= sizeof(a)/sizeof(a[0]);
int target=1;
sort(a,a+asize);
if(binary_search(a,a+asize,target))
{
    cout<<"Element found";
}
else{
    cout<<"Element not found";
}
cout<<binary_search(a,a+asize,target);
return 0;
}
