#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if(v[i] <= v[j] && v[j] <= v[k]){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    
    return 0;
}