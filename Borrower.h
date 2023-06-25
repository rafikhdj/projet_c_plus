#include <iostream>
#include <string>
using namespace std;

#ifndef Borrower_h
#define Borrower_h


// Classe Borrower
class Borrower {
private:
    std::string name;
    Portfolio portfolio;

public:
    Borrower(std::string name) {
        this->name = name;
    }

    std::string getName() const {
        return name;
    }

    Portfolio getPortfolio() const {
        return portfolio;
    }
};


#endif /* Borrower_h */