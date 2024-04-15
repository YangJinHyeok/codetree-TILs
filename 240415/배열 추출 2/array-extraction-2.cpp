#include <iostream>
#include <queue>
#include <cmath>
#include <tuple>
using namespace std;

priority_queue<pair<int,int>> pq;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x != 0) {
            pq.push({ -abs(x), -x });
        }
        else {
            if (pq.size() == 0) {
                cout << 0 << "\n";
            }
            else {
                int b = pq.top().second;
                cout << -b << "\n";
                pq.pop();
            }
        }
    }
    return 0;
}