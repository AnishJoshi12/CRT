#include <iostream>
using namespace std;

int main()
{
    int n=5;
     switch(n++==5) 
     {
        case 1: 
         cout<<"True";
        break;
       case 2:     
         cout<<"False";
         break;
     }
    return 0;
}