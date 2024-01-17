#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    int elapsed_time = 0;
    cin >> a >> b >> c >> d;
    while(true) {
        if(a == c && b == d)
            break;
    
        elapsed_time++;
        b++;
    
        if(b == 60) {
            a++;
            b = 0;
        }
    }
    
    cout << elapsed_time;
    
    return 0;
}