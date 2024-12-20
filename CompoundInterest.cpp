#include "CompoundInterest.h"
#include <cmath> // for rounding
using namespace std;
#include <iostream>

// Constructor for compound interest with monthly deposits
CompoundInterest::CompoundInterest(double initialInv, double monthlyDep, double interest){
    initialInvestment = initialInv;
    monthlyDeposit = monthlyDep;
    annualInterestRate = interest;}

// Constructor for compound interest without monthly deposits
CompoundInterest::CompoundInterest(double initialInv, double interest){
    initialInvestment = initialInv;
    monthlyDeposit = 0;
    annualInterestRate = interest;}

// Interest Calculations
double CompoundInterest::calculateYearlyResult() {
    double totalInterest = 0.0; // To track interest earned in a year
    double balance = initialInvestment; // Start with the initial investment

    for (int i = 0; i < 12; ++i) { // 12 months in a year
        // Adds the monthly deposit to the balance
        balance += monthlyDeposit;
        // Calculates interest based on the updated balance
        double monthlyInterest = (balance * (annualInterestRate / 100)) / 12;
        // Adds interest to the balance
        balance += monthlyInterest;
        // Sums the total interest earned this year
        totalInterest += monthlyInterest;
    }

    // Updates the initial investment for the next year
    initialInvestment = balance;

    return totalInterest; // Returns the total interest earned for the year
}

double CompoundInterest::calculateYearEndBalance()  {
    // After year calculation, this becomes the new current investment/balance
    return initialInvestment;
}
