#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define MAXN 1005

vector<int> adj[MAXN];
bool visited[MAXN];
vector<pair<int, int>> treeEdge;
int n, m, k, cnt;

void reset(void)
{
	for (int i = 1; i <= n; i++)
	{
		adj[i].clear();
	}
	treeEdge.clear(); cnt = 0;
	memset(visited, false, sizeof(visited));
}

void inp(void)
{
	cin >> n >> m >> k;
	for (int i = 1; i <= m; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
}

void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = true;
	cnt = 1;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int y : adj[x])
		{
			if (!visited[y])
			{
				visited[y] = true;
				q.push(y);
				treeEdge.push_back({x, y});
				++cnt;
			}
		}
	}
}

int main(void)
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		reset();
		inp();
		bfs(k);
		if (cnt != n)
		{
			cout << -1 << el;
		}
		else
		{
			for (pair<int, int> e : treeEdge)
			{
				cout << e.first << " " << e.second << el;
			}
		}
	}
}

