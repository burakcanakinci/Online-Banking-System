/*  Copyright (c) Rajdeep Roy Chowdhury 2018 <rrajdeeproychowdhury@gmail.com>
*   This file is part of CSE202 Online Banking Management System Project
*
*   Permission is hereby granted, free of charge, to any person obtaining a copy of 
*   this software and associated documentation files (the "Software"), to deal in the Software 
*   without restriction, including without limitation the rights to use, copy, modify, merge, 
*   publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons 
*   to whom the Software is furnished to do so, subject to the following conditions:
*   The above copyright notice and this permission notice shall be included in all copies or 
*   substantial portions of the Software.
*
*   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
*   BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
*   NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
*   DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
*   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.*/

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