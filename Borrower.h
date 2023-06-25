#include <iostream>
#include <string>
#include "Part.h"
#include "Portfolio.h"

using namespace std;

#ifndef Borrower_h
#define Borrower_h


// Classe Borrower
class Borrower {
private:
    std::string name;
    Portofolio portfolio;

public:
    Borrower(std::string name) {
        this->name = name;
        this->portofolio = new Portofolio();
    }

    std::string getName() const {
        return name;
    }

    Portfolio getPortfolio() const {
        return portfolio;
    }

    void addPart(double amount, Facility facility){
  
        this->portofolio.addPart(new Part(amount, facility));
    }



};


#endif /* Borrower_h */