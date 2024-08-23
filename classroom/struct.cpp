#include <iostream>
#include <string>
using namespace std;


struct Employee {
    string name;
    int age;
    double salary;
};

int main() {
    
    Employee employees[10];

    
    for (int i = 0; i < 10; i++) {
        cout << "Enter details for employee " << i + 1 << ":\n";
        
        
        cout << "Name: ";
        getline(cin >> ws, employees[i].name); 
        
        
        cout << "Age: ";
        cin >> employees[i].age;
        
        
        cout << "Salary: ";
        cin >> employees[i].salary;
        
        cout << endl;
    }

   
    cout << "Employee Details:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Employee " << i + 1 << ":\n";
        cout << "Name: " << employees[i].name << endl;
        cout << "Age: " << employees[i].age << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << endl;
    }

    return 0;
}
