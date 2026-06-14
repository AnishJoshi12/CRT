#include <bits/stdc++.h>
using namespace std;
// to remove whitespaces
int main(){
string str="Hello Anish Joshi";
int i=0;
int j=0;
while (str[i] != '\0')
{
    if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
    {
        str[j] = str[i];
        j++;
    }
    i++;
}
str.resize(j);
cout << str;
return 0;
}