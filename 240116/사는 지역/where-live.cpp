#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Location{
    public:
        string name,addr,city;

        Location(string name, string addr, string city){
            this->name = name;
            this->addr = addr;
            this->city = city;
        }
        Location(){}
};

void printLocation(Location loca){
  cout << "name " << loca.name << endl;
  cout << "addr " << loca.addr << endl;
  cout << "city " << loca.city << endl; 
}


int main() {
    int a;
    cin >> a;
    Location location[a];
    for(int i = 0; i < a; i++){
        string b,c,d;
        cin >> b >> c >> d;
        location[i] = Location(b,c,d);
    }

    int min_idx = 0;
    for(int i = 0; i < a; i++) {
        if(location[min_idx].name < location[i].name)
            min_idx = i;
    }

    printLocation(location[min_idx]);

    


    return 0;
}