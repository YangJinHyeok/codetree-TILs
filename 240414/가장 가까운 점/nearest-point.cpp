#include <iostream>
#include <queue>
#include <cmath>
#include <tuple>
using namespace std;

priority_queue<tuple<int, int, int>> pq;


int main() {

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        pq.push({ -(a+b),-a,-b});
    }
    for (int i = 0; i < m; i++) {
        int v, w;
        tie(ignore, v, w) = pq.top();
        v = -v;
        w = -w;
        pq.pop();
        v += 2;
        w += 2;
        pq.push({ -(v + w),-v,-w });
    }

    int v, w;
    tie(ignore, v, w) = pq.top();
    cout << -v << " " << -w;



    return 0;
}