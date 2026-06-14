#include <iostream>    
#include <string>
using namespace std;

int main()
{
    string text="Happy Birthday!";
    string pattern="Birth";

    bool found=false;
    for(int i=0;i<=text.length()-pattern.length();i++)
    {
        bool match=true;
        for(int j=0;j<pattern.length();j++)
        {
             if(text[i+j]!=pattern[j])
                match=false;
                break;
             
        }
        if(match)
         found=true;
         break;
    }
    
    if(found)    
     cout<<"Substring present";   
    else
        cout<<"substring not present";
    return 0;
}
