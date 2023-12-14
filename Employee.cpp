#include "Employee.h"

Employee::Employee()
{

    dep=nullptr;
}

Employee::~Employee()
{
   delete []b;
}
Employee::Employee(string name,string phone,string jobTitle,string email,int employeeid)
{
    this->name=name;
    this->phone=phone;
    this->jobTitle=jobTitle;
    this->email=email;
    this->employeeid=employeeid;
}
void Employee::set_name(string name)
{
    this->name=name;

}
void Employee::set_phone(string phone)
{
    this->phone=phone;
}
void Employee::set_jopTitle(string jobTitle)
{
    this->jobTitle=jobTitle;
}
void Employee::set_email(string email)
{
    this->email=email;
}
void Employee::set_employeeid(int emloyeeid)
{
    this->employeeid=employeeid;
}
void Employee::get_details()
{
    string name;
    string phone;
    string jobTitle;
    string email;
    int employeeid;
    char answer;
    cout<<"Enter Employee's name: ";
    cin>>name;
    set_name(name);
    cout<<"Enter Employee's phone: ";
    cin>>phone;
    set_phone(phone);
    cout<<"Enter Employee's job Title: ";
    cin>>jobTitle;
    set_jopTitle(jobTitle);
    cout<<"Enter Employee's email: ";
    cin>>email;
    set_email(email);
    cout<<"Enter Employee's Id: ";
    cin>>employeeid;
    this->employeeid=employeeid;
    cout<<"Do you want to add Benefit (Y/N).?\n";
    cin>>answer;
    if(answer=='Y'||answer=='y')
    {
        char x='y';
        do
        {
            add_benefit();
            cout<<"Do you want to add another benefit? (y/n)?\n";
            cin>>x;
        }
        while(x=='y'||x=='Y');
    }
    else
    {
        double amount=0;
        b[count]= new HealthBenefit;
        b[count]->set_amount(amount);
    }
}

string Employee::get_name()
{
    return name;
}
string Employee::get_phone()
{
    return phone;
}
string Employee::get_jobTitle()
{
    return jobTitle;
}
string Employee::get_email()
{
    return email;
}
int Employee::get_emplyeeid()
{
    return employeeid;
}
void Employee::DisplayDetails()
{
    cout<<"--> Name: "<<name<<endl;
    cout<<"--> Phone: "<<phone<<endl;
    cout<<"--> JobTitle: "<<jobTitle
        <<"\n--> Email: "<<email
        <<"\n--> ID: "<<employeeid<<endl;
    for(int i=0; i<count; i++)
    {
        cout<<"Benefit number"<<i+1<<":\n";
        b[i]->Display_Benefit();
    }
  if(dep!=nullptr)
        cout<<">Department: "<<dep->get_name()<<endl;
}
void Employee::add_benefit()
{
    int ans;
            cout<<"Choose which Benefit do yo want to add \n>(1)Health Benefit\n>(2)Dental Benefit\n"
                <<"Enter your choice (1/2)?\n";
            cin>>ans;
            if(ans==1)
            {
                b[count]=new HealthBenefit;
                b[count++]->get_details();
            }

            else
            {


                b[count]=new DentalBenefit;
                b[count++]->get_details();

}
}
void Employee::edit_benefit()
{
    for(int i=0; i<count; i++)
        b[i]->Display_Benefit();
        cout<<"chose the number of the benefit you want to edit from this employee";
        int num;
        cin>>num;
        int z=num-1;// because array
        b[z]->get_details();
}
void Employee::delete_benefit()
{
    if(count!=0){
   for(int i=0; i<count; i++)
        b[i]->Display_Benefit();
        cout<<"chose the number of the benefit you want to delete from this employee";
        int num;
        cin>>num;
        int z=num-1;// because array
            for(int x=z; x<count; x++)
                b[x]=b[x+1];
                cout<<"The benefit is deleted\n";
                count--;
    }
    else cout<<"There is no benefit to this employee to be deleted \n";
}

