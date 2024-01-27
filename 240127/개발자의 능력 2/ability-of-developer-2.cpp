#include <iostream>
#include <algorithm>
using namespace std;

int set[6];

int main() {
    // 여기에 코드를 작성해주세요.

    for(int i=0; i<6; i++) cin >> set[i];

    sort(set, set + 6);

    int first = set[0] + set[5];
    int second = set[1] + set[4];
    int third = set[2] + set[3];

    int big = max(first, max(second, third));
    int small = min(first, min(second, third));

    cout << abs(big - small);
    return 0;
}