#include <iostream>
#include <string>
using namespace std;

#ifndef Part_h
#define Part_h

// Classe Part
class Part {
private:
    double amount;
    double interest;

public:
    Part(double amount, double interest) {
        this->amount = amount;
        this->interest = interest;
    }

    double getAmount() const {
        return amount;
    }

    double getInterest() const {
        return interest;
    }
};


#endif /* Part_h */