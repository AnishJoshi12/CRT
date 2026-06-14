#include <iostream>
using namespace std;

class graph
{
private:
    bool **adjmatrix;
    int vertices;

public:
    graph(int v)
    {
        vertices = v;
        adjmatrix = new bool*[vertices];

        for (int i = 0; i < vertices; i++)
        {
            adjmatrix[i] = new bool[vertices];

            for (int j = 0; j < vertices; j++)
            {
                adjmatrix[i][j] = false;
            }
        }
    }

    void display()
    {
        for (int i = 0; i < vertices; i++)
        {
            for (int j = 0; j < vertices; j++)
            {
                cout << adjmatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void addEdge(int source , int destination)
    {
      adjmatrix[source][destination]=true;
      adjmatrix[destination][source]=true;
    }
};

int main()
{
    graph g(4);
    g.display();
    g.addEdge(0,1);
    g.addEdge(1,0);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    
    cout<<"After adding edge"<<endl;
    g.display();
    return 0;
}