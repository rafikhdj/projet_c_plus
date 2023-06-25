#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef Deal_h
#define Deal_h

/*

•	Le numéro du contrat : une lettre (S,Z,B) suivi par 4 chiffres 
•	L’Agent : Nom de la banque
•	Le Pool : la liste des institutions financières  
•	Le Borrower : Nom de  l’emprunteur 
•	Le montant du projet
•	Devise
•	La date de la signature du contrat 
•	La date de la fin du contrat 
•	Le status du deal (terminated (le montant du prêt a été utilisé et remboursé, closed (la gestion du client est en cours))


*/

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
};



#endif /* Deal_h */