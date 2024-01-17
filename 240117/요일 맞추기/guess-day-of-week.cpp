#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c, d;
    int elapsed_days = 0;
    
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"Sat", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri"};
    cin >> a >> b >> c >> d;
    while(true) {
        if(a == c && b == d)
            break;

        if(a < c){
            elapsed_days++;
            b++;

            if(b > num_of_days[a]) {
            a++;
            b = 1;
        }
        }
        else if( a > c){
            elapsed_days++;
            b--;

            if(b < 1){
                a--;
                b = num_of_days[a];
            }
        }
        else{
            if(b < d){
                elapsed_days++;
                b++;

                if(b > num_of_days[a]) {
                    a++;
                    b = 1;
                }
            }
            else{
                elapsed_days++;
                b--;

                if(b < 1){
                    a--;
                    b = num_of_days[a];
                }
            }
            
        }
        
    }
    
    cout << days[elapsed_days % 7];
    
    return 0;
}