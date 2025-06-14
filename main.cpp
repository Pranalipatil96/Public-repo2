#include <iostream>
#include <iomanip>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks[3];  // Math, Science, English

    void input(string n, int r, int m1, int m2, int m3) {
        name = n;
        roll = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void displayReport() {
        int total = marks[0] + marks[1] + marks[2];
        float avg = total / 3.0;

        cout << "========= STUDENT REPORT =========\n";
        cout << "Name    : " << name << "\n";
        cout << "Roll No : " << roll << "\n";
        cout << "-------------------------------\n";
        cout << "Subject     Marks\n";
        cout << "Math        " << marks[0] << "\n";
        cout << "Science     " << marks[1] << "\n";
        cout << "English     " << marks[2] << "\n";
        cout << "-------------------------------\n";
        cout << "Total       " << total << "\n";
        cout << fixed << setprecision(2);
        cout << "Average     " << avg << "\n";
    }
};

int main() {
    Student s;
    s.input("Anjali Verma", 23, 91, 87, 94);
    s.displayReport();
    return 0;
}