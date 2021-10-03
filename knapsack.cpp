#include <bits/stdc++.h>
using namespace std;
 int val[1001],wt[1001];

 //bounded knapsack: we have to select one value only once
int knapSack(int W, int n)
{
    int i, w;
    vector<vector<int>> K(n + 1, vector<int>(W + 1));
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
//Unbounded Kanpsack: we can select any value any number of times
int unboundedKnapsack(int W, int n)
{
     int i, w;
    vector<vector<int>> K(n + 1, vector<int>(W + 1));
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;

                //main difference is here b/w KP and Unbounded KP, here after taking
                //value val[i-1] we are not reducing i and calls K[i][w-wt[i-1]]
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                K[i][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,W;
        cin>>n>>W;
        for(int i=0;i<n;i++)
        {
            cin>>val[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>wt[i];
        }
         cout << unboundedKnapsack(W,n);
    }


    return 0;
}
