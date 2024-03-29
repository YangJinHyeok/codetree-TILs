#include <iostream>
using namespace std;

int arr[2001][2001];

int main() {
    int a, b, c, d;
    int q, w, e, r;
    cin >> a >> b >> c >> d;
    for (int j = a; j < c; j++) {
        for (int k = b; k < d; k++) {
            arr[j + 1000][k + 1000] = 1;
        }
    }


    cin >> q >> w >> e >> r;
    for (int j = q; j < e; j++) {
        for (int k = w; k < r; k++) {
            if (arr[j + 1000][k + 1000] == 1) {
                arr[j + 1000][k + 1000] = 0;
            }
        }
    }
    int maxrowSum = 0;
    int maxcolSum = 0;
    int minrowindex = 2001;
    int maxrowindex = 0;
    int mincolindex = 2001;
    int maxcolindex = 0;
    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (arr[i][j] == 1) {
                if (minrowindex > j) {
                    minrowindex = j;
                }
                if (maxrowindex < j) {
                    maxrowindex = j;
                }
            }
            if (maxrowSum < (maxrowindex - minrowindex + 1)) {
                maxrowSum = (maxrowindex - minrowindex + 1);
            }
        }
    }

    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (arr[j][i] == 1) {
                if (mincolindex > j) {
                    mincolindex = j;
                }
                if (maxcolindex < j) {
                    maxcolindex = j;
                }
            }
            if (maxcolSum < (maxcolindex - mincolindex + 1)) {
                maxcolSum = (maxcolindex - mincolindex + 1);
            }
        }
    }




    cout << maxcolSum * maxrowSum;

    return 0;
}