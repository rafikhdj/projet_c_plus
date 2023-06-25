#include <iostream>
#include <string>
#include <vector>

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

// Classe Portfolio
class Portfolio {
private:
    std::vector<Part> parts;

public:
    void addPart(double amount, double interest) {
        Part part(amount, interest);
        parts.push_back(part);
    }

    std::vector<Part> getParts() const {
        return parts;
    }
};

// Classe Lender
class Lender {
private:
    std::string name;
    Portfolio portfolio;

public:
    Lender(std::string name) {
        this->name = name;
    }

    std::string getName() const {
        return name;
    }

    Portfolio getPortfolio() const {
        return portfolio;
    }
};

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

int main() {
    // Création d'un objet Deal
    std::string contractNumber = "S1234";
    std::string agent = "Banque A";
    std::vector<std::string> pool = {"Banque B", "Banque C", "Banque D"};
    std::string borrower = "Compagnie aérienne C1";
    double projectAmount = 10000000.0;
    std::string currency = "USD";
    std::string contractStartDate = "2023-01-01";
    std::string contractEndDate = "2023-12-31";
    std::string dealStatus = "ongoing";

    // Création d'un objet Facility
    std::string facilityStartDate = "2023-01-01";
    std::string facilityEndDate = "2023-06-30";
    double facilityAmount = 5000000.0;
    std::string facilityCurrency = "USD";
    std::vector<std::string> facilityLenders = {"Banque A", "Banque B"};
    double facilityInterestRate = 0.05;

    Facility facility(facilityStartDate, facilityEndDate, facilityAmount, facilityCurrency, facilityLenders,
                      facilityInterestRate);

    std::vector<Facility> facilities = {facility};

    Deal deal(contractNumber, agent, pool, borrower, projectAmount, currency, contractStartDate, contractEndDate,
              dealStatus, facilities);

    // Utilisation des méthodes d'accès aux attributs de Deal
    std::cout << "Contract Number: " << deal.getContractNumber() << std::endl;
    std::cout << "Agent: " << deal.getAgent() << std::endl;
    std::cout << "Pool: ";
    for (const auto& institution : deal.getPool()) {
        std::cout << institution << " ";
    }
    std::cout << std::endl;
    std::cout << "Borrower: " << deal.getBorrower() << std::endl;
    std::cout << "Project Amount: " << deal.getProjectAmount() << std::endl;
    std::cout << "Currency: " << deal.getCurrency() << std::endl;
    std::cout << "Contract Start Date: " << deal.getContractStartDate() << std::endl;
    std::cout << "Contract End Date: " << deal.getContractEndDate() << std::endl;
    std::cout << "Deal Status: " << deal.getDealStatus() << std::endl;

    // Utilisation des méthodes d'accès aux attributs de Facility
    Facility firstFacility = deal.getFacilities()[0];
    std::cout << "Facility Start Date: " << firstFacility.getStartDate() << std::endl;
    std::cout << "Facility End Date: " << firstFacility.getEndDate() << std::endl;
    std::cout << "Facility Amount: " << firstFacility.getTrancheAmount() << std::endl;
    std::cout << "Facility Currency: " << firstFacility.getCurrency() << std::endl;
    std::cout << "Facility Lenders: ";
    for (const auto& lender : firstFacility.getLenders()) {
        std::cout << lender << " ";
    }
    std::cout << std::endl;
    std::cout << "Facility Interest Rate: " << firstFacility.getInterestRate() << std::endl;

    return 0;
}
