#include<iostream>
#include"person.h"
#ifndef __CUSTOMER_H
#define __CUSTOMER_H
class Customer:public Person{
    private:
    float balance;

    protected:

    public:
    Customer():Person(),balance(0){}
    // Customer(int ID,std::string name,std::string address,long int phone, TimeStamp dob,std::string pass,float balance):
    // Person(ID,name,address,phone,dob,pass),balance(balance){};
    Customer(int ID,const char* name,const char* address,long int phone, TimeStamp dob,const char* pass,float balance):
    Person(ID,name,address,phone,dob,pass),balance(balance){};
    
    //COPY CONSTRUCTOR MUST BE PROVIDED, ELSE VECTOR WONT WORK
    Customer(const Customer& other):Person(other){
        this->balance=other.balance;
    }
    float getBalance() const;
    void showDetails() const;
    // void setValues();
   void deposit(float);
   void withdraw(float);
};
#endif