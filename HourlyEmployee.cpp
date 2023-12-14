#include "HourlyEmployee.h"
#include"Employee.h"
#include<iostream>
#include<string>
using namespace std;
HourlyEmployee::HourlyEmployee()
{

}

/*HourlyEmployee::~HourlyEmployee()
{
    //dtor
}*/

void HourlyEmployee::get_details()
{
    double HoursWorked;
    double Rate;
    Employee::get_details();
    cout<<"Enter Employee's HoursWorked: ";
    cin>>HoursWorked;
    this->HoursWorked=HoursWorked;
    cout<<"Enter Employee's Rate: ";
    cin>>Rate;
    this->Rate=Rate;

}
double HourlyEmployee::get_HoursWorked()
{
    return HoursWorked;
}
double HourlyEmployee::get_Rate()
{
    return Rate;
}
double HourlyEmployee::get_salary()
{
    double salary;
    salary=Rate*HoursWorked;
    return salary;
}

void HourlyEmployee::DisplayDetails()
{
    Employee::DisplayDetails();
    cout<<"-->HoursWorked: "<<HoursWorked
        <<"\n-->Rate: "<<Rate
        <<"\n-->Salary: "<<get_salary()
        <<"\n-->Total pay: "<<calculate_pay()<<endl;

}
void HourlyEmployee::add_Hours(double more_hours)
{
    HoursWorked+=more_hours;

}
double  HourlyEmployee::calculate_pay()
  {
      double s=0;
      for(int i=0;i<count;i++)
        s+=b[i]->Calculate_Benefit();
      double sum=get_salary()+s;
            return sum;

  }

