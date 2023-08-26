#include"credential.h"

bool Credential::operator==(const Credential &other)
{
    if(ID==other.ID && (strcmp(pass,other.pass)==0))
    {
        return true;
    }
    else{
        return false;
    }
}
void Credential::setID(int ID)
{
    this->ID=ID;
}
void Credential::setPass(const char* pass)
{
    strcpy(this->pass,pass);
}