#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int k,n;

void Print(){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}

void Choose(int num){
    int cnt = n;
    int temp = 1;
    while(cnt > 0){
        cout << num << " " << temp << "\n";
        cnt--;
        temp++;
    }

}



int main() {

    cin >> k >> n;

    for(int i = 1; i <= k; i++){
        Choose(i);
    }

    return 0;
}