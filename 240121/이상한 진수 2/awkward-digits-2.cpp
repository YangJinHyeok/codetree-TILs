#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        if(a.size() == 1 && a[i] == '1'){
            cout << 0;
            return 0;
        }
        if(a[i] == '1'){
            cnt++;
        }
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] == '0'){
            a[i] = '1';
            break;
        }
    }

    if(cnt == a.size()){
        a[a.size() - 1] = '0';
    }

    int num = 0;
    
    for(int i = 0; i < a.size(); i++){
        num = num * 2 + (a[i] - '0');
    }

    cout << num;

    return 0;
}