#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <Employee.h>
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include"Benefit.h"
#include"DentalBenefit.h"
#include"HealthBenefit.h"

class HourlyEmployee : public Employee
{
private:
    double HoursWorked;
    double Rate;
public:
    HourlyEmployee();
    HourlyEmployee(double HoursWorked,double Rate,string name,string phone,string jobTitle,string email,int employeeid):Employee(name,phone,jobTitle,email,employeeid)
    {
        this->HoursWorked=HoursWorked;
        this->Rate=Rate;
    }
    void get_details();
    double get_HoursWorked();
    double get_Rate();
    double get_salary();
    void DisplayDetails();
    void add_Hours(double more_hours);
     double  calculate_pay();


    // virtual ~HourlyEmployee();



};

#endif // HOURLYEMPLOYEE_H
