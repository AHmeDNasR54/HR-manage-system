#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H

#include "SalariedEmployee.h"


class ManagerEmployee : public SalariedEmployee
{
private:
    double bonus;
public:
    ManagerEmployee();
    ManagerEmployee(double bonus,double Salary,string name,string phone,string jobTitle,string email,int employeeid):SalariedEmployee(Salary,name,phone,jobTitle,email,employeeid)
    {
        this->bonus=bonus;
    }
    void get_details();
    double get_bonus();
    double get_salary();
    void DisplayDetails();
    void add_Bonus(double more_bonus);
    double  calculate_pay();

    virtual ~ManagerEmployee();

protected:

};

#endif // MANAGEREMPLOYEE_H
