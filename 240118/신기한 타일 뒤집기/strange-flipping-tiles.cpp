#include <iostream>

#define MAX_K 100000

using namespace std;

int n;
int tile[2 * MAX_K + 1];
int cnt_w[2 * MAX_K + 1];
int cnt_b[2 * MAX_K + 1];
int w, b;

int main() {
    cin >> n;
    int cur = MAX_K;

    for(int i = 1; i <= n; i++) {
        int x;
        char c;
        cin >> x >> c;

        if(c == 'L') {
            while(x--) {
                tile[cur] = 1;
                cnt_w[cur]++;
                if(x) cur--;
            }
        }
        else {
            while(x--) {
                tile[cur] = 2;
                cnt_b[cur]++;
                if(x) cur++;
            }
        }
    }

    for(int i = 0; i <= 2 * MAX_K; i++) {
        if(tile[i] == 1) w++;
        else if(tile[i] == 2) b++;
    }

    cout << w << " " << b;
    return 0;
}