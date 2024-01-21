#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;



int main() {
    string a;
    cin >> a;
    int cnt = 0;
    for(int i = 0; i < a.size()-1; i++){
        for(int j = i + 2; j < a.size() - 1; j++){
            if(a[i] == '('){
                if(a[i+1] == '('){
                    if(a[j] == ')'){
                        if(a[j+1] == ')'){
                            cnt++;
                            }}}}}}

    cout << cnt;
    
    return 0;
}