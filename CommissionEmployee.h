#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include "Employee.h"


class CommissionEmployee : public Employee
{
public:
    double Target;
    double Rate;
    CommissionEmployee();
    CommissionEmployee(double Target,double Rate,string name,string phone,string jobTitle,string email,int employeeid):Employee(name,phone,jobTitle,email,employeeid)
    {
        this->Target=Target;
        this->Rate=Rate;
    }
    void get_details();
    double get_Target();
    double get_Rate();
    double get_salary();
    void DisplayDetails();
    double  calculate_pay();

    virtual ~CommissionEmployee();

protected:


};

#endif // COMMISSIONEMPLOYEE_H
