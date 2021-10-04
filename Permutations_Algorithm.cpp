#include <iostream>
#include <vector>

#define n 17

using namespace std;

bool canAdd(int i, int graph[n+1][n+1], int* path, int p){

    if(graph[ path[p-1] ] [i] == 0 )
        return false;

    for(int j = 0; j < p; j ++)
        if( path[j] == i )
            return false;

    return true;
}

bool findPath(int graph[n+1][n+1], int *path, int p){

    if( p == n + 1  )
        return true;

    int i;
    for(i = 1; i <= n; i ++){
        if ( canAdd (i, graph, path, p) ){
            path[p] = i;
            if(findPath(graph, path, p + 1))
                return true;
            path[p] = -1; 
        }
    }
    return false;
}

int main(){

    int i, j;

    int graph[n + 1][n + 1];

    for(i = 0; i <= n; i ++){
        for(j = 0; j <= n; j ++){
            graph[i][j] = 0;
        }
    }

    vector <int> squares;

    for(i = 2; i*i < 2*n - 1; i ++){
        squares.push_back(i*i);
    }

    int sqno = squares.size();
    int sq, ps;

    for(i = 1; i <= n; i ++){
        for(j = 0; j < sqno; j ++){
            sq = squares[j];
            ps = sq - i;

            if( ps <= n && ps > 0 && 2*i!=sq ){
                graph[i][ps] = 1;
                graph[ps][i] = 1;
            }
        }
    }

    int path[n+1];

    for(i = 1; i <= n; i ++)
        path[i] = -1;

    for(i = 1; i <= n; i ++){
        path[1] = i;
        if(findPath(graph, path, 2)){
            for(int j = 1; j <= n; j ++){
                cout<<path[j]<<" ";
            }
            break;
        }
    }

    return 0;
}