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
        if(v[i] > t){
            cnt++;
            if(cnt > max_cnt){
                max_cnt = cnt;
            }
        }
        else if(v[i] <= t){
            cnt = 0;
        }
    }

    cout << max_cnt;



    return 0;
}