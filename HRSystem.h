#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include"Benefit.h"
#include"HealthBenefit.h"
#include"DentalBenefit.h"
#include"Employee.h"
#include"HourlyEmployee.h"
#include"SalariedEmployee.h"
#include"ManagerEmployee.h"
#include"CommissionEmployee.h"
#include"Department.h"
#include<iostream>
#include<string>
using namespace std;
class HRSystem
{
private:
    Employee **em;
    Department *d;

   static  int counter; int counter2=0;
   public:

    HRSystem();
    void CalculateTotalPyroll();
    void addEmployee();
    void editEmployee();
    void deleteEmployee();
    void Search();
    void add_depart();
    void edit_depart();
    void delete_depart();
    void ShowAll();
    void check_Benefit();// use in main
    void check_Salary();// use in main
    void passing_em_to_depart();
    void show_Em_in_dep();
    void calAverage_inDepart();

    virtual ~HRSystem();

protected:

};

#endif // HRSYSTEM_H
