#include<iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for(int i=1;i<n ;i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;

    }
       
}

void printarr(int arr[],int n)
{
for (int i=0;i<n;i++)
{
 cout<<arr[i]<<" ";
}
cout<<endl;
}

int main()
{
    int n=5;
    int arr[]={12,3,56,18,52,7};
    cout<<"Array before sorting\n";
    printarr(arr,n);
    insertionsort(arr,n);
    cout<<"Array after sorting\n";
    printarr(arr,n);
    return 0;

}