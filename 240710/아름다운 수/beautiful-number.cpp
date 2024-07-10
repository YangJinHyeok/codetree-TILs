#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<int> v;
int answer = 0;

bool check(){
    for(int i = 0; i < n; i+=v[i]){
        if(i + v[i] - 1 >= n)
            return false;

        for(int j = i; j < i + v[i]; j++){
            if(v[j] != v[i])
                return false;
        }            
    }

    return true;
}

void choose(int num){
    if(num == n){
        if(check()){
            answer++;
        }
        return;
    }

    for(int i = 1; i <= 4; i++){
        v.push_back(i);
        choose(num + 1);
        v.pop_back();
    }

}



int main() {
    
    cin >> n;

    choose(0);

    cout << answer;

    return 0;
}