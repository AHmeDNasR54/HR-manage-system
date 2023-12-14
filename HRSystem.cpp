#include "HRSystem.h"
#include"Department.h"
#include"Employee.h"
#include"HourlyEmployee.h"
#include"SalariedEmployee.h"
#include"ManagerEmployee.h"
#include"CommissionEmployee.h"
#include"Benefit.h"
#include"DentalBenefit.h"
#include"HealthBenefit.h"
#include<iostream>
#include<string>
#include<windows.h>
//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

using namespace std;
int HRSystem::counter=0;
HRSystem::HRSystem()
{
    d=new Department[50];
    em = new Employee*[10];
}

HRSystem::~HRSystem()
{


    delete []d;
    for (int i = 0; i < 10; i++) {
    delete em[i];
}
    delete []em;
}
void HRSystem::addEmployee()
{
    cout<<"Chose which kind of employee do you want to add:\n>(1)adding hourly employee"
        <<"\n>(2)adding commission employee\n>(3)adding salary employee\n>(4)adding manager employee"
        <<"/nEnter your choice (1/2/3/4)?\n";
    char choice;
    cin>>choice;
    switch(choice)
    {
    case '1':
        em[counter]= new HourlyEmployee;
        em[counter]->get_details();
        counter++;
        break;
    case '2':
        em[counter]= new CommissionEmployee;
        em[counter]->get_details();
        counter++;
        break;
    case '3':
        em[counter]= new SalariedEmployee;
        em[counter]->get_details();
        counter++;
        break;
    case '4':
        em[counter]= new ManagerEmployee;
        em[counter]->get_details();
        counter++;
        break;
    default:
        cout<<"Please enter correct choice (1,2,3 or 4)";
    }
    cout<<"The Employee is added successfully :)\n";

}
void HRSystem::editEmployee()
{
    int test=0,test2=0;
    int id;
    cout<<"Enter the ID for the employee you want to edit: ";
    cin>>id;
    for(int i=0; i<counter; i++)
        if(em[i]->get_emplyeeid()==id)
        {
            test2=i;
            em[test2]->get_details();
            test++;
            break;
        }
    if(test==0)
        cout<<"There is no employee has this ID\n";
    else
    {
            cout<<"The Employee is edited successfully :)\n";
    }
}
void HRSystem::deleteEmployee()
{
    int test=0,test2=0;
    int id;
    cout<<"Enter the ID for the employee you want to delete: ";
    cin>>id;
    for(int i=0; i<counter; i++)
        if(em[i]->get_emplyeeid()==id)
        {
            test2=i;
            for(int x=test2; x<counter; x++)
                em[x]=em[x+1];
            test++;
            break;
        }
    if(test==0)
        cout<<"There is no employee has this ID\n";
    else
    {

    cout<<"The Employee is deleted successfully :)\n";

        counter--;
    }

}
void HRSystem::Search()
{
    cout << "===========================================\n";
    cout << "           Search                          \n";
    cout << "===========================================\n";
    cout << "1. Search for Employees \n";
    cout << "2. Search for Departments\n";
    cout << "===========================================\n";
    cout << "Please enter your choice (1-2): \n";
    int choice;
    cin>>choice;
    switch(choice)
    {

    case 1:
    {


        int test=0,test2=0;
        int id;
        cout<<"Enter the ID for the employee you want to search for : ";
        cin>>id;
        for(int i=0; i<counter; i++)
            if(em[i]->get_emplyeeid()==id)
            {
                test2=i;

                em[test2]->DisplayDetails();

                test++;
                break;
            }
        if(test==0)
            cout<<"There is no employee has this ID\n";
    }
    break;// UP OR DOWN {} i don't know

    case 2:
        int test3=0,test4=0;
        int id2;
        cout<<"Enter the ID for the Department you want to search for : ";
        cin>>id2;
        for(int i=0; i<counter2; i++)
            if( d[i].get_id()==id2)
            {
                test4=i;
                test3++;

                d[test4].print();

            }
        if(test3==0)
            cout<<"There is no Department has this ID\n";
        break;
    }


}

void HRSystem::ShowAll()
{
    cout << "=============================================\n";
    cout << "           Reporting                         \n";
    cout << "=============================================\n";
    cout << "1. Show all Employees \n";
    cout << "2. Show all Departments\n";
    cout << "3. Show available Benefits\n";
    cout << "4. Show all Employees in specific Department\n";
    cout << "=============================================\n";
    cout << "Please enter your choice (1-4): \n";
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        if (counter!=0)
            for(int i=0; i<counter; i++)
            {

                em[i]->DisplayDetails();
                  if (i!=counter-1)
                  {

                cout<<"****************\n";

            }
            }
        else cout<<"There is no employee is stored to display\n";
        break;
    case 2:
        if (counter2!=0)
            for(int i=0; i<counter2; i++)
            {

                d[i].print();
                if (i!=counter2-1)
                {


                cout<<"****************\n";
                }
            }
        else cout<<"There is no department is stored to display\n";
        break;
    case 3:
        cout<<"We have two kind of benefits in our system\n";

        cout<<" (1) Health benefit :\n   this provide 20% of amount.\n";
        cout<<" (2) Dental benefit :\n   this provide 10% of amount.\n";

        break;
    case 4:

        show_Em_in_dep();

    }
}

void HRSystem::check_Benefit()
{
    int test=0,test2=0;
    int m;
    cout<<"Enter the ID for the employee you want  \n";

    cin>>m;
    for(int i=0; i<counter; i++)
        if(em[i]->get_emplyeeid()==m)
        {
            test2=i;
            test++;
            cout << "===========================================\n";
            cout << "           Benefit Management              \n";
            cout << "===========================================\n";
            cout << "1. Add New Benefit\n";
            cout <<" 2. Edit Benefit\n";
            cout << "3. Delete Benefit\n";
            cout << "===========================================\n";
            cout << "Please enter your choice (1-3): ";
            int choice;
            cin>>choice;
            switch(choice)
            {
            case 1:
                em[i]->add_benefit();
                break;
            case 2:
                em[i]->edit_benefit();
                break;
            case 3:
                em[i]->delete_benefit();
                break;
            }


        }
    if(test==0)
        cout<<"There is no employee has this ID\n";
}

void HRSystem::check_Salary()
{
    cout << "===========================================\n";
    cout << "           Salary Management               \n";
    cout << "===========================================\n";
    cout << "1. Show total pay for specific employee\n";
    cout << "2. Show average salary in specific department\n";
    cout << "3. Show total pyroll for all employees\n";
    cout << "===========================================\n";
    cout << "Please enter your choice (1-3): ";
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {

        int test=0,test2=0;
        int id;
        cout<<"Enter the ID for the employee you want : ";
        cin>>id;
        for(int i=0; i<counter; i++)
            if(em[i]->get_emplyeeid()==id)
            {
                test2=i;
                test++;
                cout<<"Total Payroll for this employee is : "<<em[i]->calculate_pay()<<endl;
                break;
            }
        if(test==0)
            cout<<"There is no employee has this ID\n";

        }
            break;
    case 2:
        calAverage_inDepart();
        break;
    case 3:
        CalculateTotalPyroll();


    }
}
    void HRSystem::add_depart()
    {
        d[counter2++].get_details();

        cout<<"The Department is added successfully\n";

    }
    void HRSystem::edit_depart()
    {
        int test=0,id;
        cout<<"Enter the ID for the department you want to edit: ";
        cin>>id;
        for(int i=0; i<counter2; i++)
            if( d[i].get_id()==id )
            {
                test++;
                d[i].get_details();
                break;
            }
        if(test==0)
            cout<<"There is no department has this ID\n";
            else{
                cout<<"The Department is edited successfully\n";

            }

    }
    void HRSystem::delete_depart()
    {
        int test=0,id,test2=0;
        cout<<"Enter the ID for the department you want to delete : ";
        cin>>id;
        for(int i=0; i<counter2; i++)
            if( d[i].get_id()==id )
            {
                test2=i;
                test++;
                for(int x=test2; x<counter2; x++)
                    d[x]=d[x+1];

                cout<<"The Department is deleted successfully\n";

                counter2--;
                break;
            }
        if(test==0)
            cout<<"There is no department has this ID\n";

    }
    void HRSystem::passing_em_to_depart()
    {
        int id,id2,test=0,test2=0;
        cout<<"Enter ID for employee you want to add: ";
        cin>>id;
        for (int i=0; i<counter; i++)
            if(em[i]->get_emplyeeid()==id)
            {
                test++;
                cout<<"Enter ID for depart you want: ";
                cin>>id2;
                for(int x=0; x<counter2; x++)
                    if( d[x].get_id()==id2)
                    {
                        test2++;

                        d[x].print();

                        cout<<"The employee is added to this department successfully\n";

                        em[i]->dep= &d[x];
                        break;
                    }
                if(test2==0)
                    cout<<"There is no department has this Id\n";
                break;
            }
        if(test==0)
            cout<<"There is no employee has this ID\n";




    }
    void HRSystem::CalculateTotalPyroll()
    {
        double sum=0;
        for(int i=0; i<counter; i++)
            sum+=em[i]->calculate_pay();
        cout<<"The Total Pyroll for Employees : "<<sum<<endl;

    }
    void HRSystem::show_Em_in_dep()
    {
        int id,c=1,testt1=0,testt2=0;
        cout <<"Enter ID for Department you want to show Employees in: ";
        cin>>id;
        for(int i=0; i<counter2; i++)
            if(d[i].get_id()==id)
            {
                testt1++;
                for(int x=0; x<counter; x++)
                    if(em[x]->dep!=nullptr)
                {
                    if(em[x]->dep->get_id()==d[i].get_id())//(*em[x]->dep).get_id() \em[x]->dep->get_id()
                    {
                        testt2++;

                        cout<<"Employee number "<<c<<" : "<<em[x]->get_name()<<endl;

                        c++;
                    }
                }
                if(testt2==0)
                    cout<<"This Department hasn't any Employee\n";


            }
        if(testt1==0)
            cout<<"There isn't Department has this Id\n";
    }
    void HRSystem::calAverage_inDepart()
    {
        int id,number=0,test=0;
        double sum=0,average;
        cout <<"Enter ID for Department you want to show average salary in: ";
        cin>>id;
        for(int i=0; i<counter2; i++)
            if(d[i].get_id()==id)
            {
                test++;
                for(int x=0; x<counter; x++)
                    if(em[x]->dep!=nullptr)// very very important
                {
                    if(em[x]->dep->get_id()==d[i].get_id())
                    {
                        number++;
                        sum+=em[x]->calculate_pay();
                    }
                }
            }
        if(test==0)
            cout<<"There isn't Department has this Id\n";
        else
        {
            average=sum/(number);
            cout<<"Average salary for this Department = "<<average<<endl;
        }
    }








