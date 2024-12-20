
#ifndef COMPOUNDINTEREST_H
#define COMPOUNDINTEREST_H

class CompoundInterest {
private:
    double initialInvestment;
    double monthlyDeposit{};
    double annualInterestRate;

public:
    // Constructor for compound interest with monthly deposits
    CompoundInterest(double initialInv, double monthlyDep, double interest);

    // Constructor for compound interest without monthly deposits
    CompoundInterest(double initialInv, double interest);

    // Function to calculate interest for one year
    double calculateYearlyResult() ;

    // Function to calculate year-end balance
    double calculateYearEndBalance() ;
};



#endif //COMPOUNDINTEREST_H
