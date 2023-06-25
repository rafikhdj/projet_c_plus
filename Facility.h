#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef Facility_h
#define Facility_h



// Classe Facility
class Facility {
private:
    std::string startDate;
    std::string endDate;
    double trancheAmount;
    std::string currency;
    std::vector<std::string> lenders;
    double interestRate;

public:
    Facility(std::string startDate, std::string endDate, double trancheAmount, std::string currency,
             std::vector<std::string> lenders, double interestRate) {
        this->startDate = startDate;
        this->endDate = endDate;
        this->trancheAmount = trancheAmount;
        this->currency = currency;
        this->lenders = lenders;
        this->interestRate = interestRate;
    }

    std::string getStartDate() const {
        return startDate;
    }

    std::string getEndDate() const {
        return endDate;
    }

    double getTrancheAmount() const {
        return trancheAmount;
    }

    std::string getCurrency() const {
        return currency;
    }

    std::vector<std::string> getLenders() const {
        return lenders;
    }

    double getInterestRate() const {
        return interestRate;
    }
};


#endif /* Facility_h */