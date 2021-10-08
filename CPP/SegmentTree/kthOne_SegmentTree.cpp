#include <bits/stdc++.h>
using namespace std;

#define int long long int

#define N 100005

int tree[4 * N];
int arr[N];

void build_tree(int index, int start, int end)
{
    if (start == end)
    {
        tree[index] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    build_tree(index * 2, start, mid);
    build_tree(index * 2 + 1, mid + 1, end);
    tree[index] = tree[index * 2] + tree[index * 2 + 1];
    return;
}

int query(int k, int index, int start, int end)
{
    if (start == end)
    {
        return start;
    }
    int left = tree[index * 2];
    int right = tree[index * 2 + 1];
    int mid = (start + end) / 2;
    if (right == 0 or left > k)
    {
        return query(k, index * 2, start, mid);
    }
    else
    {
        return query(k - left, index * 2 + 1, mid + 1, end);
    }
}

void update_tree(int i, int index, int start, int end)
{
    if (start == end)
    {
        arr[start] = !arr[start];
        tree[index] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    if (i <= mid)
        update_tree(i, index * 2, start, mid);
    else
        update_tree(i, index * 2 + 1, mid + 1, end);
    tree[index] = tree[index * 2] + tree[index * 2 + 1];
    return;
}

signed main()
{
    int t = 1;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        build_tree(1, 0, n - 1);
        while (q--)
        {
            int cmd;
            cin >> cmd;
            if (cmd == 1)
            {
                int index;
                cin >> index;
                update_tree(index, 1, 0, n - 1);
            }
            else
            {
                int k;
                cin >> k;
                cout << query(k, 1, 0, n - 1) << endl;
            }
        }
    }
}
