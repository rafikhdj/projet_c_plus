#include <iostream>
#include <string>
using namespace std;

#ifndef Portofolio_h
#define Portofolio_h

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


#endif /* Portofolio_h */