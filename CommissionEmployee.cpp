#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee()
{
    //ctor
}

CommissionEmployee::~CommissionEmployee()
{
    //dtor
}

void CommissionEmployee::get_details()
{
    double Target;double Rate;
    Employee::get_details();
    cout<<"Enter Employee's Target: ";
    cin>>Target;
    this->Target=Target;
    cout<<"Enter Employee's Rate: ";
    cin>>Rate;
    this->Rate=Rate;
}
double CommissionEmployee::get_Target()
{
    return Target;
}
double CommissionEmployee::get_Rate()
{
    return Rate;
}
double CommissionEmployee::get_salary()
{
    double salary=Rate*Target;
    return salary;
}
void CommissionEmployee::DisplayDetails()
{
    Employee::DisplayDetails();
    cout<<"-->Target: "<<Target
    <<"\n-->Rate: "<<Rate
    <<"\n-->Salary: "<<get_salary()
    <<"-->Total Pay: "<<calculate_pay()<<endl;

}
double  CommissionEmployee::calculate_pay()
  {
      double s=0;
      for(int i=0;i<count;i++)
        s+=b[i]->Calculate_Benefit();
      double sum=get_salary()+s;
      return sum;
  }



