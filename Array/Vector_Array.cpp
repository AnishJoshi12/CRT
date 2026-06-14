#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> g1;
   for(int i=1;i<=5;i++)
   {
    g1.push_back(i);
   }
  cout<<"Output of begin and end"<<endl;
   for(auto i=g1.begin();i!=g1.end();++i)
   {
    cout<<*i<<" ";
   }
    cout<<"\nOutput of rbegin and rend"<<endl;
    for(auto ir=g1.rbegin();ir!=g1.rend();++ir)
    {
        cout<<*ir<<" ";
    }
cout<<"\nsize: "<<g1.size();
cout<<"\ncapacity "<<g1.capacity();
cout<<"\nmax_size: "<<g1.max_size();

cout<<"\n at \t: g1.at(4)= "<<g1.at(3);
cout<<"\n front() \t: g1.front()="<<g1.front();
cout<<"\n back() \t: g1.back()= "<<g1.back();
    return 0;
}
