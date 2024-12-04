#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>
#include <climits>
using namespace std;

int md(pair<int, int> p1, pair<int, int> p2) {
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

int solve(int n, pair<int, int> s, pair<int, int> d, vector<tuple<pair<int, int>, pair<int, int>, int>>& w) {
    int nodes = 2 * n + 2;
    vector<vector<int>> dist(nodes, vector<int>(nodes, INT_MAX));

    for (int i = 0; i < nodes; ++i) dist[i][i] = 0;

    for (int i = 0; i < n; ++i) {
        pair<int, int> a = get<0>(w[i]), b = get<1>(w[i]);
        int t = get<2>(w[i]);
        int ai = 2 + 2 * i, bi = 2 + 2 * i + 1;
        dist[ai][bi] = dist[bi][ai] = t;
    }

    for (int i = 0; i < n; ++i) {
        pair<int, int> a = get<0>(w[i]), b = get<1>(w[i]);
        int ai = 2 + 2 * i, bi = 2 + 2 * i + 1;
        dist[0][ai] = md(s, a);
        dist[0][bi] = md(s, b);
        dist[ai][1] = md(d, a);
        dist[bi][1] = md(d, b);
    }

    dist[0][1] = md(s, d);

    for (int k = 0; k < nodes; ++k)
        for (int i = 0; i < nodes; ++i)
            for (int j = 0; j < nodes; ++j)
                if (dist[i][k] < INT_MAX && dist[k][j] < INT_MAX)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    return dist[0][1];
}

int main() {
    int n = 0;
    pair<int, int> s, d;
    cin >> s.first >> s.second >> d.first >> d.second;
    vector<tuple<pair<int, int>, pair<int, int>, int>> w(n);
    cout << solve(n, s, d, w) << endl;
    return 0;
}
