#include <iostream>
#include <vector>
using namespace std;

int k,n;
vector<int> v;

void print_v(){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}


void choice(int num){

    if(num == n){
        print_v();
        return;
    }

    for(int i = 1; i <= k; i++){
        v.push_back(i);
        choice(num + 1);
        v.pop_back();
    }

}


int main(){

    cin >> k >> n;

    choice(0);


    return 0;
}