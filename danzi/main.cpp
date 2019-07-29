#include <iostream>
#include <vector>
#include <stdio.h>
#include<queue>
using namespace std;

int N;
int cnt;
int map[26][26] = { 0 };
int visit[26][26] = { 0 };
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0 , -1, 0, 1 };
vector<int> co;

bool inner(int a, int  b) {
	return (a >= 0 && a < N) && (b >= 0 && b < N);
}

int dfs(int p, int k) {
	visit[p][k] = 1;
	cnt++;
	for (int i = 0; i < 4; i++) {
		if (inner(p + dx[i], k + dy[i]) && map[p + dx[i]][k + dy[i]] == 1 && visit[p + dx[i]][k + dy[i]] == 0) {
			//co[site].push_back(1);
			dfs(p + dx[i], k + dy[i]);
		}
	}
	return cnt;
}

int main() {
	cin >> N;
	int count = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf_s("%1d", &map[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (visit[i][j] == 0 && map[i][j] == 1) {
				cnt = 0;
				co.push_back(dfs(i, j));
				count++;
			}
		}
	}

	cout << count << endl;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < co.size(); i++) {
		pq.push(co[i]);
	}

	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}

	return 0;
}