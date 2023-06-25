#include <iostream>
#include <string>
#include "Portofolio.h"

using namespace std;

#ifndef Lenders_h
#define Lenders_h

// Classe Lender
class Lender {
private:
    std::string name;


public:
    Lender(std::string name) {
        this->name = name;
    }

    std::string getName() const {
        return name;
    }


};

#endif /* Lenders_h */