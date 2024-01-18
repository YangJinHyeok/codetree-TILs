#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int max_cnt = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || v[i] > v[i-1] && v[i] > t && v[i-1] > t){
            cnt++;
            if(cnt > max_cnt){
                max_cnt = cnt;
            }
        }
        else if(v[i] <= v[i-1] || v[i] < t){
            cnt = 1;
        }
    }

    cout << max_cnt;



    return 0;
}