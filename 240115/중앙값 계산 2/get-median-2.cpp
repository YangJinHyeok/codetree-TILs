#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n;
    cin>> n;
    vector<int> v;

    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        v.push_back(a);
        if(i % 2 == 1){
            sort(v.begin(),v.end());
            cout << v[v.size()/2] << " ";
        }
    }

    return 0;
}