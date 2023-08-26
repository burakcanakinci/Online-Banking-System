#include<iostream>
#include<iomanip>
#include"txn.h"

void Txn::printTxn() const{
    Rajdeep rajdeep;
    rajdeep.drawLine(30);
    std::cout<<"\tMINI-STATEMENT"<<std::endl;
    rajdeep.drawLine(30);
    std::cout<<std::setw(20)<<"ID : "<<this->id<<std::endl
    <<std::setw(20)<<"Name : "<<(this->cust).getName()<<std::endl
    <<std::setw(20)<<"Txn Date : "<<(this->ts).toString()<<std::endl
    <<std::setw(20)<<"Amount : "<<(this->amount)<<std::endl
    <<std::setw(20)<<"Transaction type: "<<((type=='d'||type=='D')?"Debit":"Credit")<<std::endl;
    rajdeep.drawLine(30);
    std::cout<<"Have a nice day..."<<std::endl;
    rajdeep.drawLine(30);
}
