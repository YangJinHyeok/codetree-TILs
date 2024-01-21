#include <iostream>
using namespace std;

#define MAX_NUM 100

int arr[MAX_NUM];

int main() {
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max_sum = 0;
    for(int i = 0; i < n - 2; i++){
        int sum = 0;
        for(int j = i + 2; j < n; j++){
            sum = arr[i] + arr[j];
        }

        if(sum > max_sum){
            max_sum = sum;
        }

    }

    cout << max_sum;



    return 0;
}