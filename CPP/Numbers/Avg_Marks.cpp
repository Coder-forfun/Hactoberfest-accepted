#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
    double m1, m2, m3, arr[3];
    string nameA,usn;

    void set(string u, string name, double n1, double n2, double n3);
    double avg(double, double, double);
    void display(int, Student *);
    ~Student()
    {
        cout << "Destructor is called!\n";
    }
};

void Student::set(string u, string name, double n1, double n2, double n3)
{
    usn = u;
    nameA = name;
    m1 = n1;
    m2 = n2;
    m3 = n3;
}

double
Student::avg(double m1, double m2, double m3)
{
 
    return (m1+m2+m3) / 3;
}

void Student::display(int n, Student *s)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Name : " << s[i].nameA << endl;
        cout << "USN : " << s[i].usn << endl;
        cout << "Average : " << s[i].avg(s[i].m1, s[i].m2, s[i].m3);
        cout << "\n\n";
    }
}

int main()
{
    int n;
    double m1, m2, m3;
    string name,usn;
    cout << "Enter the number of students\n";
    cin >> n;
    Student *s = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name\n";
        cin >> name;
        cout << "Enter the usn\n";
        cin >> usn;
        cout << "Enter the marks of 3 tests\n";
        cin >> m1 >> m2 >> m3;
        s[i].set(usn, name, m1, m2, m3);
    }
    cout << "\n\nThe details are :\n\n";
    s->display(n, s);
    delete[] s;
    return 0;
}