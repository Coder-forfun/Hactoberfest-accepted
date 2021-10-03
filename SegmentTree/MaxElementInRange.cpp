#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;
int tree[4 * N], a[N];

void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = a[start];
        return;
    }
    int mid = (start + end) / 2;

    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);

    tree[node] = max(tree[2 * node], tree[2 * node + 1]);

    return;
}

int query(int node, int start, int end, int l, int r)
{
    if (end < l || start > r)
    {
        return INT_MIN;
    }
    if (start >= l && end <= r)
    {
        return tree[node];
    }
    int mid = (start + end) / 2;
    return max(query(2 * node, start, mid, l, r), query(2 * node + 1, mid + 1, end, l, r));
}

void update(int node, int start, int end, int index, int val)
{
    if (start == end)
    {
        a[index] = val;
        tree[node] = val;
        return;
    }
    int mid = (start + end) / 2;

    if (mid >= index)
    {
        update(2 * node, start, mid, index, val);
    }
    else if (mid < index)
    {
        update(2 * node + 1, mid + 1, end, index, val);
    }

    tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(1, 0, n - 1);
    for (int i = 1; i < 16; i++)
    {
        cout << tree[i] << " ";
    }
    cout << endl;
    while (1)
    {
        int type;
        cin >> type;
        if (type == -1)
        {
            break;
        }
        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            cout << query(1, 0, n - 1, l, r) << endl;
        }
        if (type == 2)
        {
            int index, val;
            cin >> index >> val;
            update(1, 0, n - 1, index, val);
        }
    }
    cout << endl;
}
