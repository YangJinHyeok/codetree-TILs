#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == '0'){
            a[i] = '1';
            break;
        }
    }
    int num = 0;
    
    for(int i = 0; i < a.size(); i++){
        num = num * 2 + (a[i] - '0');
    }

    cout << num;

    return 0;
}