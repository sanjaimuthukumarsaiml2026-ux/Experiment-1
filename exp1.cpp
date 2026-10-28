#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
public:
    // Constructor
    Student(int r, string n)
    {
        rollNo = r;    
        name = n;
        cout << "\nStudent object created" << endl;
    }
    
    // Member function to display details
    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
    
    // Destructor
    ~Student()
    {
        cout << "Student object destroyed" << endl;
    }
};

int main()
{
    int r;
    string n;

    // Getting input from the user
    cout << "Enter Roll Number: ";
    cin >> r;

    // Clear the input buffer to handle the newline character left by cin >>
    cin.ignore(); 

    cout << "Enter Name: ";
    getline(cin, n);

    // Creating the Student object with user inputs
    Student s1(r, n);
    s1.display();

    return 0;
}