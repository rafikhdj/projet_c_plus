#include <iostream>
#include <string>
#include <vector>




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
