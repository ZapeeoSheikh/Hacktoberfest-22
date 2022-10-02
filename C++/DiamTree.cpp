#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> t[N];
int d[N];
void dfs(int v, int par = -1)
{
    for (auto child : t[v])
    {
        if (child == par)
        {
            continue;
        }
        d[child] = d[v] + 1;
        dfs(child, v);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        t[a].push_back(b);
        t[b].push_back(a);
    }
    dfs(1);
    int maxx = -1;
    int maxv = -1;
    for (int i = 1; i <= n; i++)
    {
        if (maxx < d[i])
        {
            maxx = d[i];
            maxv = i;
        }
        d[i] = 0;
    }

    dfs(maxv);
    maxx = -1;

    for (int i = 1; i <= n; i++)
    {
        if (maxx < d[i])
        {
            maxx = d[i];
        }
    }
    cout << maxx << endl;

    return 0;
}
