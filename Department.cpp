#include "Department.h"

Department::Department()
{
    //ctor
}

Department::~Department()
{
    //dtor
}
Department::Department(int departID,string departName)
{
    this->departID=departID;
    this->departName=departName;

}
void Department::set_id(int departID)
{
    this->departID=departID;
}
void Department::set_name(string departName)
{
    this->departName=departName;
}
int Department::get_id()
{
    return departID;
}
string Department::get_name()
{
    return departName;
}
void Department::get_details()
{

    int departID;
    string departName;
    cout<<"Enter Department's name : ";
    cin>>departName;
    this->departName=departName;
    cout<<"Enter Department's ID: ";
    cin>>departID;
    this->departID=departID;

}
void Department::print()
{
    cout<<"-->Department's name: "<<departName<<endl;
    cout<<"-->Department's ID: "<<departID<<endl;
}
