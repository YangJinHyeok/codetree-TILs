#include <iostream>
#include <string>
using namespace std;


class Bomb{
    public:
        string code;
        char color;
        int second;

        Bomb(string code, char color, int second){
            this->code = code;
            this->color = color;
            this->second = second;
        }

        Bomb(){}
};

int main() {
    
    string a;
    char b;
    int c;

    cin >> a >> b >> c;

    Bomb bomb = Bomb(a,b,c);

    cout << "code : " << bomb.code << endl;
    cout << "color : " << bomb.color << endl;
    cout << "second : " << bomb.second << endl;

    return 0;
}