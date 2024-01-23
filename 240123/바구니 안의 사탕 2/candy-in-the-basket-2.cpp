#include <iostream>
#include <algorithm>
using namespace std;

int arr[101];


int main() {
    
    int n,k;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        arr[b] += a;
    }
    int max_sum = 0;
    for(int i = 0; i < 101; i++){
        int sum = 0;
        int c, d;
        if(i - k < 0){
            c = 0;
        }
        else{
            c = i - k;
        }
        if(i + k > 101){
            d = 101;
        }
        else{
            d = i + k;
        }
        for(int j = c; j <= d; j++){
            sum += arr[j];
        }

        max_sum = max(max_sum, sum);
    }

    cout << max_sum;

    return 0;
}