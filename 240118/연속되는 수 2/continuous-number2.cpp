#include <iostream>
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
    int max_cnt = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || v[i] == v[i - 1]){
            cnt++;
        }
        else if(v[i] != v[i-1]){
            cnt = 0;
        }
        if(cnt > max_cnt){
            max_cnt = cnt;
        }
    }

    cout << max_cnt + 1;

    return 0;
}