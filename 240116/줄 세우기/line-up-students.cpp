#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public:
        int height, weight, number;

        Student(int height, int weight, int number) {
            this->height = height;
            this->weight = weight;
            this->number = number;
        }
        Student(){}
};

bool cmp(Student a, Student b) {
    if(a.height == b.height){
        if(a.weight == b.weight){
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main() {
    int n;
    cin >> n;
    Student students[n];
    int cnt = 1;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        students[i] = Student(a,b,cnt);
        cnt++;
    }

    sort(students, students + n, cmp);

    for(int i = 0; i < n; i++){
        cout << students[i].height << " " << students[i].weight << " " << students[i].number << endl;
    }
    return 0;
}