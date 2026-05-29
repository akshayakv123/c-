//store the 5 objects in an array
#include <iostream>
using namespace std;

// Structure for student details
struct Student
{
    string name;
    string fatherName;
    string schoolName;
    string nativePlace;
};

int main()
{
    // Array of 5 objects
    Student s[5];

    // Input details
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Father Name: ";
        cin >> s[i].fatherName;

        cout << "School Name: ";
        cin >> s[i].schoolName;

        cout << "Native Place: ";
        cin >> s[i].nativePlace;
    }

    // Display details
    cout << "\n--- Student Details ---\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Father Name: " << s[i].fatherName << endl;
        cout << "School Name: " << s[i].schoolName << endl;
        cout << "Native Place: " << s[i].nativePlace << endl;
    }

    return 0;
}