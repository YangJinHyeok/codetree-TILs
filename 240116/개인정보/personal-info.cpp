#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public:
        string name;
        int height;
        float weight;

        Student(string name, int height, float weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Student(){}
};

bool cmp(Student a, Student b) {
    return a.height > b.height;
}
bool cmp1(Student a, Student b) {
    return a.name < b.name;
}



int main() {
    Student students[5];
    for(int i = 0; i < 5; i++){
        string a;
        int b;
        float c;
        cin >> a >> b >> c;
        students[i] = Student(a,b,c);
    }
    cout << fixed;
    cout.precision(1);
    cout << "name" << endl;
    sort(students, students + 5, cmp1);

    for(int i = 0; i < 5; i++){
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }
    cout << endl << "height" << endl;
    sort(students, students + 5, cmp);

    for(int i = 0; i < 5; i++){
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }
    return 0;
}