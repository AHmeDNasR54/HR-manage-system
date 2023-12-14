#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include"Benefit.h"
#include"DentalBenefit.h"
#include"HealthBenefit.h"
#include"Department.h"
using namespace std;

class Employee
{
protected:
    string name;
    string phone;
    int employeeid;
    string jobTitle;
    string email;
    Benefit *b[5];
    int count=0;
public:
        Department *dep;

    Employee();
    Employee(string name,string phone,string jobTitle,string email,int employeeid);
    void set_name(string name);
    void set_phone(string phone);
    void set_jopTitle(string jobTitle);
    void set_email(string email);
    void set_employeeid(int emloyeeid);
   virtual void get_details();// to collect all data
    string get_name();
    string get_phone();
    string get_jobTitle();
    string get_email();
    int get_emplyeeid();
    virtual  void DisplayDetails();
    virtual double get_salary()=0;
    virtual double  calculate_pay()=0;
    void add_benefit();
    void edit_benefit();
    void delete_benefit();

    virtual ~Employee();


};

#endif // EMPLOYEE_H
