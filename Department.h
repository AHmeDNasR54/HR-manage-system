#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<iostream>
#include<string>
using namespace std;

class Department
{
private:
    int departID;
    string departName;
    int counter =0;
public:
    Department();
    Department(int departID,string departName);
    void set_id(int departID);
    void set_name(string departName);
    int get_id();
    string get_name();
    void get_details();
    void print();
    virtual ~Department();

protected:

};

#endif // DEPARTMENT_H
