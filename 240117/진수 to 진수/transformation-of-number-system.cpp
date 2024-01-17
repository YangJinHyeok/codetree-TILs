#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int a, b;
    string n;
    cin >> a >> b >> n;

    // a진수를 10진수로 변환
    int decimal = 0;
    for(int i = 0; i < n.length(); ++i) {
        decimal = decimal * a + (n[i] - '0');
    }

    // 10진수를 b진수로 변환
    vector<int> result;
    while(decimal > 0) {
        result.push_back(decimal % b);
        decimal /= b;
    }

    // b진수 출력
    for(int i = result.size() - 1; i >= 0; --i) {
        cout << result[i];
    }

    return 0;
}