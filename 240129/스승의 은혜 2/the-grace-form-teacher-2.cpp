#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> v;

int main() {
    int n,b;
    cin >> n >> b;
    for(int i = 0; i < n; i++){
        int p;
        cin >> p;
        v.push_back(p);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        cnt++;
        if(sum > b){
            if(sum - (v[i] / 2) <= b){
                break;
            }
            else{
                cnt--;
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}