#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    return a.second < b.second;
}

int main() {

    int n,h,t;
    vector<pair<int,int>> v;
    cin >> n >> h >> t;

    for(int i = 0; i < n; i++){
        int a,diff;
        cin >> a;
        diff = abs(h - a);
        v.push_back({a,diff});
    }

    sort(v.begin(), v.end(), cmp);
    
    int sum = 0;
    for(int i = 0; i < t; i++){
        sum += v[i].second;
    }

    cout << sum;




    return 0;
}