#include<iostream>
#include<cstring>
#ifndef __CREDENTIAL_H
#define __CREDENTIAL_H
class Credential{
    public:
    int ID;
    // std::string pass;
    char pass[30];
    // Credential(int id,std::string pass):id(id),pass(pass){}
    Credential():ID(-1){
        strcpy(this->pass,"\0");
    }
    Credential(int ID,const char* pass):ID(ID){
        strcpy(this->pass,pass);
    };
    void setID(int ID);
    void setPass(const char* pass);
    bool operator==(const Credential&);
};
#endif