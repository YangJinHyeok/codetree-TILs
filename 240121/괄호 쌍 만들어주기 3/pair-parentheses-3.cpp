#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;



int main() {
    string a;
    cin >> a;
    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        for(int j = i + 1; j < a.size(); j++){
            if(a[i] == '('){
                if(a[j] == ')'){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    
    return 0;
}