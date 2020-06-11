#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;
struct Person{

    string name;

    Person(){}
    // Person& operator&=(const Person& p){
    //     this->name = p.name;
    //     return *this;
    // }
    Person(string name):name(name){}
};
#endif
