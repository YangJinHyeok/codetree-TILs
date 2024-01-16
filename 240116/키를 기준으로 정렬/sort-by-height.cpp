#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        int height, weight;

        Student(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Student(){}
};

bool cmp(Student a, Student b) { // 국어 점수 기준 내림차순 정렬
    return a.height < b.height; 
}

int main() {
    int a;
    cin >> a;
    Student students[a];

    for(int i = 0; i < a; i++){
        string b;
        int c, d;
        cin >> b >> c >> d;
        students[i] = Student(b,c,d);
    }


    sort(students, students + a, cmp);

    for(int i = 0; i < a; i++)
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;

    return 0;
}