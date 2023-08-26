include"timestamp.h"
#include"customer.h"
#include"rajdeep.h"
#ifndef __TXN_H
#define __TXN_H
class Txn{
    int id;
    TimeStamp ts;
    Customer cust;
    float amount;
    char type;
    public:
    Txn(int id,TimeStamp ts,Customer cust,float amount,char type):id(id),ts(ts),cust(cust),amount(amount),type(type){}
    void printTxn() const;
};
#endif