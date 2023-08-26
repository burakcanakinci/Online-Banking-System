#include"person.h"

Person::Person(const Person& other){
    this->ID=other.ID;
    strcpy(this->name,other.name);
    strcpy(this->address,other.address);
    this->phone=other.phone;
    this->dob=other.dob;
    strcpy(this->pass,other.pass);
}
int Person::getID() const{
    return this->ID;
}
const char* Person::getName() const{
    return this->name;
}
const char* Person::getAddress() const{
    return this->address;
}
long int Person::getPhone() const{
    return this->phone;
}
 TimeStamp Person::getDob() const{
    return this->dob;
}
const char* Person::getPass() const{
    return this->pass;
}
void Person::setPass(const char* newpass)
{
    std::strcpy(this->pass,newpass);
}