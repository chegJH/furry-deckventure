#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;
struct Person{

    protected:
    string name_;

    public:
    Person();
    Person(string name):name_(name){}
    string getName();
};


#endif
