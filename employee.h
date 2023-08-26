#include<iostream>
#include"person.h"
#include"timestamp.h"
#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
class Employee:public Person{
    private:
    float salary;
    
    protected:

    public:
    Employee():Person(),salary(0){}
    Employee(int ID,const char*name,const char*address,long int phone,TimeStamp dob,const char*pass,float salary):
    Person(ID,name,address,phone,dob,pass),salary(salary){}
    //COPY CONSTRUCTOR IN ORDER TO MAKE VECTOR WORK
    Employee(const Employee& other):Person(other),salary(other.salary){}
    float getSalary() const;
    void showDetails() const;
};
#endif