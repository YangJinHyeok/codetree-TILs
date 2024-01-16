#include <iostream>
#include <algorithm>

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

bool cmp(Student a, Student b) {
    if(a.height == b.height){
        return a.weight > b.weight;
    }
    return a.height < b.height;
}



int main() {
    int n;
    cin >> n;
    Student students[n];
    for(int i = 0; i < n; i++){
        string a;
        int b, c;
        cin >> a >> b >> c;
        students[i] = Student(a,b,c);
    }
    sort(students, students + 5, cmp);

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }
    return 0;
}