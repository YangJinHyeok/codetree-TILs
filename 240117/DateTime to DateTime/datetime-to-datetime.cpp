#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int day = 11, hour = 11, min = 11, a, b, c;
    int elapsed_time = 0;
    cin >> a >> b >> c;
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