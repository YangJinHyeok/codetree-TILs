#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxplus = 0;
    int maxminus = 0;
    int pluscnt = 0;
    int minuscnt = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a > 0){
            if(minuscnt > maxminus){
                maxminus = minuscnt;
                minuscnt = 0;
            }
            pluscnt++;
        }
        else{
            if(pluscnt > maxplus){
                maxplus = pluscnt;
                pluscnt = 0;
            }
            minuscnt++;
        }
    }

    if(maxminus > maxplus){
       cout << maxminus;
    }
    else{
        cout << maxplus;
    }
    return 0;
}