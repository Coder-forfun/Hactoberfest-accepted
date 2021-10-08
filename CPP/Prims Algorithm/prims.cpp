#include <iostream>
#include <conio.h>
using namespace std;

#define ROW 7
#define COL 7
#define infi 5000
class prims
{
    int graph[ROW][COL], nodes;

public:
    prims();
    void createGraph();
    void primsAlgo();
};
prims::prims()
{
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            graph[i][j] = 0;
}
void prims::createGraph()
{
    int i, j;
    cout << "\tOUTPUT\n\n"
         << endl;
    cout << "PRIMS ALGORITHM:" << endl;
    cout << "----------------" << endl;
    cout << endl;
    cout << "Enter total no of nodes :";
    cin >> nodes;
    cout << "\n\n\nEnter Adjacency Matrix :\n\n ";
    for (i = 0; i < nodes; i++)
        for (j = 0; j < nodes; j++)
            cin >> graph[i][j];
    cout << " ";
    for (i = 0; i < nodes; i++)
    {
        for (j = 0; j < nodes; j++)
        {
            if (graph[i][j] == 0)
                graph[i][j] = infi;
        }
    }
}
void prims::primsAlgo()
{
    int selected[ROW], i, j, ne;
    int min, x, y;
    for (i = 0; i < nodes; i++)
        selected[i] = false;
    selected[0] = true;
    ne = 0;
    cout << "\nThe minimum cost spanning tree edges are in this order\n\n ";
    while (ne < nodes - 1)
    {
        min = infi;
        for (i = 0; i < nodes; i++)
        {
            if (selected[i] == true)
            {
                for (j = 0; j < nodes; j++)
                {
                    if (selected[j] == false)
                    {
                        if (min > graph[i][j])
                        {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        selected[y] = true;
        cout << "\n"
             << x + 1 << "-->" << y + 1;
        ne = ne + 1;
    }
}
int main()
{
    prims mst;
    mst.createGraph();
    mst.primsAlgo();

    return 0;
}
