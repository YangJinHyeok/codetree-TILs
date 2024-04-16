#include <iostream>
using namespace std;
#define MAX 45

int memo[45];


int fibo(int n){
    if(memo[n] != -1){
        return memo[n];
    }
    else if(n <= 2){
        memo[n] = 1;
    }
    else{
        memo[n] = fibo(n-1) + fibo(n-2);
    }

    return memo[n];
}


int main() {
    int n;
    cin >> n;
    for(int i = 0; i < MAX; i++){
        memo[i] = -1;
    }

    cout << fibo(n);

    return 0;
}