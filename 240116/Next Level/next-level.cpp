#include <iostream>
#include <string>
using namespace std;

class Game {
    public:
        string id;
        int level;

        Game(string id = "codetree", int level = 10) {
            this->id = id;
            this->level = level;
        }
};



int main() {
    string a;
    int b;
    cin >> a >> b;
    Game game1 = Game();
    cout << "user" << " " << game1.id << " " << "lv" << " " << game1.level << endl;  
    Game game = Game(a,b);
    cout << "user" << " " << game.id << " " << "lv" << " " << game.level << endl;
    return 0;
}