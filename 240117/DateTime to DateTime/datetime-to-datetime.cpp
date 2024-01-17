#include <iostream>
using namespace std;

int main() {
    int day = 11, hour = 11, min = 11, a, b, c;
    int elapsed_time = 0;
    cin >> a >> b >> c;
    if(a < 11){
        cout << -1;
        return 0;
    }
    while(true) {
        if(day == a && hour == b && min == c)
            break;
    
        elapsed_time++;
        min++;
    
        if(min == 60) {
            hour++;
            min = 0;
        }
        if(hour == 24){
            day++;
            hour = 0;
        }
    }
    
    cout << elapsed_time;
    
    return 0;
}