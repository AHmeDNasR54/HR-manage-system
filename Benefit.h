#ifndef BENEFIT_H
#define BENEFIT_H
#include <iostream>
#include<string>
using namespace std;

class Benefit
{
     protected:
         string PlanType;
         double amount;
    public:
        Benefit();
        Benefit(string PlanType,double amount);
        string get_PlanType();
        double get_amount();
        void set_planType(string PlanType);
        void set_amount(double amount);
        virtual void  get_details();
       virtual double Calculate_Benefit()=0;
         virtual void Display_Benefit()=0;

        virtual ~Benefit();


    private:
};

#endif // BENEFIT_H
