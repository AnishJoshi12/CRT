#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
void showq(queue<int> gq)
{
    queue<int> g=gq;
    while(!g.empty()){
        cout<< g.front() << "  ";
        g.pop(); // This only destroys the local copy 's'
    }
    cout << endl;
}

int main()
{ queue<int> que;
    que.push(11);
    que.push(48);
    que.push(58);
    que.push(35);
    showq(que);
     cout<<que.size()<<endl;
     cout<<que.front()<<endl;
     cout<<que.back()<<endl;
     que.pop();
     showq(que);

    return 0;
}