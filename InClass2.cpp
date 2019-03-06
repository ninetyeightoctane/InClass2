#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Employee{

private:
    string name; // Employee's name
    int idNumber; // ID number
    string department; // Department name
    string position; // Employee's position

public:
    Employee(string n, int i, string d, string p);
    Employee();
    Employee(string n, int i);

    string getdepartment(){
        return department;
    }
    string getname(){
        return name;
    }

    int getidNumber(){
        return idNumber;
    }

    string getposition(){
        return position;
    }

    void setdepartment(string d){
        department = d;
    }

    void setposition(string d){
        position = d;
    }

    void setname(string d){
        name = d;
    }

    void setidNumber(int d){
        idNumber = d;
    }
};

Employee::Employee(string n, int i, string d, string p){
    name = n;
    idNumber = i;
    department = d;
    position = p;
}

Employee::Employee(string n, int i){
    name = n;
    idNumber = i;
}

Employee::Employee(){
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}

void displayEmployee(Employee);

int main(){

    Employee e1("Susan Mayers",47899,"Accounting","Vice President");
    Employee e2("Mark Jones",39119,"IT","Programmer");
    Employee e3("Joy Rogers",81774,"Manufacturing","Engineer");

    cout<<setw(10)<<" Name IdNumber Department Position"<<endl;
    cout<<endl;
    Employee employee[] = {e1, e2, e3};
    displayEmployee(employee[0]);
    displayEmployee(employee[1]);
    displayEmployee(employee[2]);

    return 0;
}

void displayEmployee(Employee e){
    cout<<setw(20)<<e.getname()<<setw(20)<<e.getidNumber()<<setw(20)<<e.getdepartment()<<" "<<setw(20)<<e.getposition()<<endl;
}