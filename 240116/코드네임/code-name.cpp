#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        char grade;
        int score;

        Person(char grade, int score){
            this->grade = grade;
            this->score = score;
        }

        Person(){}
};

bool compareByScore(const Person &a, const Person &b) {
    return a.score < b.score;  // 오름차순 정렬
}

int main() {
    
    Person person[5];
    for(int i = 0; i < 5; i++){
        char g;
        int s;
        cin >> g >> s;
        person[i] = Person(g,s);
    }

    std::sort(person, person + 5, compareByScore);

     cout << person[0].grade << ' ' << person[0].score << '\n';

    



    return 0;
}