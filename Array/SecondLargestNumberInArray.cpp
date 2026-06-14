#include <iostream>
using namespace std;
int main() {
   int arr[5] = {7,3,9,2,8};
   int largest, second_largest;
    largest = second_largest = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest = arr[i];
        }
        
    }
    cout<<"Largest: "<<largest<<" Second Largest: "<<second_largest<<endl;
    return 0;
}
