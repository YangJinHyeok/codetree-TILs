#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int num = 0;
    for(int i = 0; i < a.size(); i++){
        num = num * 2 + (a[i] - '0');
    }
    
    cout << num;
}