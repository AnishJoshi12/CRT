#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(25);
    stack.push(49);
    stack.push(63);
    stack.push(45);
    stack.push(96);
    cout<<stack.top()<<endl;
    while(!stack.empty()){
            cout<<stack.top()<<" ";
            stack.pop();
    }
    cout<<endl;
    stack.push(34);
    stack.push(86);
    while(!stack.empty()){
            cout<<stack.top()<<" ";
            stack.pop();
    }
    return 0;
}