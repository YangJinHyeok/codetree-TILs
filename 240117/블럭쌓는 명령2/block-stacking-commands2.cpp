#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n,k;
    cin >> n >> k;
    int* arr = new int[n+1];
    for(int i = 0; i < n+1; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < k; i++){
        int a,b;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            arr[j]++;
        }
    }

    int max_index = 0;
    for(int i = 0; i < n+1; i++){
        if(arr[i] > arr[max_index]){
            max_index = i;
        }
    }

    cout << arr[max_index];



    return 0;
}