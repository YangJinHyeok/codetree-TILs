#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    
    int a,b;
    string c;
    cin >> a >> b >> c;
    vector<string> v;
    int cnt = 0;

    for(int i = 0 ; i < a ; i ++){
        bool flag = true;
        string d;
        cin >> d;
        for(int j = 0; j < c.size(); j++){
            if(c[j] != d[j]){
                flag = false;
            }
        }

        if(flag){
            v.push_back(d);
            cnt += 1;
        }
        else{
            flag = true;
        }        
    }
    sort(v.begin(), v.end());
    cout << v[b - 1];



    return 0;
}