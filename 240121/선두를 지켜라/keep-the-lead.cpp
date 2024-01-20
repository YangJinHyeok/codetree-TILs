#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000001

int pos_a[MAX];
int pos_b[MAX];


int main() {
    int n, m;
    cin >> n >> m;
    int time_a = 1;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        while (b--) {
            pos_a[time_a] = a;
            time_a++;
        }
    }
    int time_b = 1;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        while (b--) {
            pos_b[time_b] = a;
            time_b++;
        }
    }
    int a_sum = 0;
    int b_sum = 0;
    int cnt = 0;
    bool currentA = true;
    for (int i = 1; i < time_a; i++) {
        a_sum += pos_a[i];
        b_sum += pos_b[i];
        if (a_sum > b_sum && !currentA) {
            currentA = true;
            cnt++;
        }
        else if (a_sum < b_sum && currentA) {
            currentA = false;
            if (cnt == 0) {
                cnt--;
            }
            cnt++;
        }
    }


    cout << cnt;

    return 0;
}