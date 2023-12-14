#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;


class SalariedEmployee : public Employee
{

public:
    double Salary;
    SalariedEmployee();
    SalariedEmployee(double Salary,string name,string phone,string jobTitle,string email,int employeeid):Employee(name,phone,jobTitle,email,employeeid)
    {
        this->Salary=Salary;
    }
    void get_details();
    double get_Salary2();
    double get_salary();
    void DisplayDetails();
    double  calculate_pay();

    virtual ~SalariedEmployee();

protected:

};

#endif // SALARIEDEMPLOYEE_H
