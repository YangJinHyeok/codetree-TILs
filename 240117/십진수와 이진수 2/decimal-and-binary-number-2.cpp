#include <iostream>
#include <string>
using namespace std;

int main() {
    int digits[20] = {};
    string a;
    cin >> a;
    int num = 0;
    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        num = num * 2 + (a[i] - '0');
    }
    num *= 17;

    while (true) {
        if(num < 2) {
            digits[cnt++] = num;
            break;
        }
    
        digits[cnt++] = num % 2;
        num /= 2;
    }
    
    // print binary number
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
}