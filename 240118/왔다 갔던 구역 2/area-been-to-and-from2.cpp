#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[2001];
    for(int i = 0; i < 2001; i++){
        arr[i] = 0;
    }
    int start = 1000;
    for(int i = 0; i < n; i++){
        int a;
        char b;
        cin >> a >> b;
        if(b == 'R'){
            for(int i = start; i < start + a; i++){
                arr[i]++;
            }
            start += a;
        }
        else{
            for(int i = start; i > start - a; i--){
                arr[i]++;
            }
            start -= a;
        }
    }
    int cnt = 0;
    for(int i = 0; i < 2001; i++){
        if(arr[i] > 1){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}