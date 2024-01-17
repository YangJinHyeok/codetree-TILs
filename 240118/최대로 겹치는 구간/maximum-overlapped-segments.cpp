#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[101];
    for(int i = 0 ; i < 101; i++){
        arr[i] = 0;
    }

    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        for(int j = a; j <= b-1; j++){
            arr[j]++;
        }
    }
    int max = 0;
    for(int i = 0 ; i < 101; i++){
        if(arr[max] < arr[i]){
            max = i;
        }
    }

    cout << arr[max];
    


    return 0;
}