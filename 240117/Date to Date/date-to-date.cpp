#include <iostream>
using namespace std;

int main() {
    int a, b,c,d;
    int elapsed_days = 1;
    
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> a >> b >> c >> d;
    while(true) {
        if(a == c && b == d)
            break;
    
        elapsed_days++;
        b++;
    
        if(b > num_of_days[a]) {
            a++;
            b = 1;
        }
    }
    
    cout << elapsed_days;
    
    return 0;
}