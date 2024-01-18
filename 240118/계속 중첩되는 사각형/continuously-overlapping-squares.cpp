#include <iostream>
using namespace std;

int arr[201][201];

int main() {

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        for(int j = a; j< c; j++){
                for(int k = b; k < d; k++){
                    if(i % 2 ==0){
                        arr[j+100][k+100] = 1;
                    }
                    else{
                        arr[j+100][k+100] = 2;
                    }
                    
                }
            }
    }
    int sum = 0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(arr[i][j] == 2){
                sum++;
            }
        }
    }

    cout << sum;
    




    return 0;
}