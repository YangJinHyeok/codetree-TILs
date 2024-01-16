#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Data{
    public:
        string date,day,weather;

        Data(string date, string day, string weather){
            this->date = date;
            this->day = day;
            this->weather = weather;
        }
        Data(){}
};

void printData(Data data){
  cout << data.date << " " << data.day << " " << data.weather; 
}


int main() {
    int a;
    cin >> a;
    Data data[a];
    for(int i = 0; i < a; i++){
        string b,c,d;
        cin >> b >> c >> d;
        data[i] = Data(b,c,d);
    }

    int min_idx = 0;
    for(int i = 0; i < a; i++) {
        if(data[i].weather == "Rain"){
            min_idx = i;
            break;
        }
    }
    for(int i = 0; i < a; i++) {
       if(data[i].weather == "Rain" && data[min_idx].date > data[i].date)
            min_idx = i;
    }
    

    printData(data[min_idx]);

    


    return 0;
}