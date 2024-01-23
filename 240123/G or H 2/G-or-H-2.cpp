#include <iostream>
using namespace std;

char arr[101];

int main() {
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        char b;
        cin >> a >> b;
        arr[a] = b;
    }
    int max_cnt = 0;
    for(int i = 0; i < 101; i++){
        for(int j = i; j < 101; j++){
            if(arr[i] == 0 || arr[j] == 0)
				continue;
            int gcnt = 0;
            int hcnt = 0;
            for(int k = i; k <= j; k++){
                if(arr[k] == 'G'){
                    gcnt++;
                }
                else if(arr[k] == 'H'){
                    hcnt++;
                }
            }
            if(gcnt == hcnt){
                max_cnt = max(max_cnt, j - i);
            }
            else if(gcnt == 0){
                max_cnt = max(max_cnt, j - i);
            }
            else if(hcnt == 0){
                max_cnt = max(max_cnt, j - i);
            }
        }
    }
    cout << max_cnt;

    return 0;
}