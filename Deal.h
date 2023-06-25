#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef Deal_h
#define Deal_h



// Classe Deal
class Deal {
private:
    std::string contractNumber;
    std::string agent;
    std::vector<std::string> pool;
    std::string borrower;
    double projectAmount;
    std::string currency;
    std::string contractStartDate;
    std::string contractEndDate;
    std::string dealStatus;
    std::vector<Facility> facilities;

public:
    Deal(std::string contractNumber, std::string agent, std::vector<std::string> pool, std::string borrower,
         double projectAmount, std::string currency, std::string contractStartDate, std::string contractEndDate,
         std::string dealStatus, std::vector<Facility> facilities) {
        this->contractNumber = contractNumber;
        this->agent = agent;
        this->pool = pool;
        this->borrower = borrower;
        this->projectAmount = projectAmount;
        this->currency = currency;
        this->contractStartDate = contractStartDate;
        this->contractEndDate = contractEndDate;
        this->dealStatus = dealStatus;
        this->facilities = facilities;
    }

    std::string getContractNumber() const {
        return contractNumber;
    }

    std::string getAgent() const {
        return agent;
    }

    std::vector<std::string> getPool() const {
        return pool;
    }

    std::string getBorrower() const {
        return borrower;
    }

    double getProjectAmount() const {
        return projectAmount;
    }

    std::string getCurrency() const {
        return currency;
    }

    std::string getContractStartDate() const {
        return contractStartDate;
    }

    std::string getContractEndDate() const {
        return contractEndDate;
    }

    std::string getDealStatus() const {
        return dealStatus;
    }

    std::vector<Facility> getFacilities() const {
        return facilities;
    }

    bool totalRefund(){

        for (int i = 0; i < this->facilities.size(); i++) {
            if(this->facilities[i].getOutstandingBalance() > 0){
                return false;
            }
        }

        return true;
    }
};



#endif /* Deal_h */