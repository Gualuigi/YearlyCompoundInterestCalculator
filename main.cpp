#include <iostream>
#include <iomanip> // using for fixed and set precision
#include "CompoundInterest.h"
using namespace std;

int main() {
    cout << "********* Compound Interest Calculator *********" << endl;
    cout << "Initial Investment Amount: " << endl;
    double initialInvestmentAmount;
    while (!(cin >> initialInvestmentAmount)) { // type check
        cin.clear();
        cin.ignore();
        cout << "Please enter a number" << endl;
    }

    cout << "Monthly Deposit: " << endl;
    double monthlyDeposit;
    while (!(cin >> monthlyDeposit)) { // type check
        cin.clear();
        cin.ignore();
        cout << "Please enter a number" << endl;
    }

    cout << "Annual Interest: " << endl;
    double annualInterest;
    while (!(cin >> annualInterest)) { // type check
        cin.clear();
        cin.ignore();
        cout << "Please enter a number" << endl;
    }

    cout << "Number of years: " << endl;
    int numberOfYears;
    while (!(cin >> numberOfYears)) { // type check
        cin.clear();
        cin.ignore();
        cout << "Please enter a number" << endl;
    }

    // Output for information recieved from user
    cout << "********* Compound Interest Calculator *********" << endl;
    cout << "Initial Investment Amount: " << initialInvestmentAmount << endl;
    cout << "Monthly Deposit: " << monthlyDeposit <<endl;
    cout << "Annual Interest: " << annualInterest <<endl;
    cout << "Number of years: " << numberOfYears << endl;

    cout << endl;

    CompoundInterest withoutDeposits(initialInvestmentAmount, annualInterest);
    CompoundInterest withDeposits(initialInvestmentAmount, monthlyDeposit, annualInterest);

    cout << fixed << setprecision(2); // to force two decimal

        // Without monthly deposits
    cout << "-------Balance and Interest without Monthly Deposits-------" << endl;
    cout << " Year      Year End Balance      Year End Earned interest" << endl;
    for (int i = 1; i <= numberOfYears; i++) {
        double interest = withoutDeposits.calculateYearlyResult();
        double balance = withoutDeposits.calculateYearEndBalance();
        cout << setw(5) << i << " |" << setw(16) << balance << setw(24) << interest << endl;

        }
        // With monthly deposits
        cout << "-------Balance and Interest with Monthly Deposits-------" << endl;
        cout << " Year      Year End Balance      Year End Earned interest" << endl;

    for (int i = 1; i <= numberOfYears; i++) {
        double interest = withDeposits.calculateYearlyResult();
        double balance = withDeposits.calculateYearEndBalance();
        cout << setw(5) << i << " |" << setw(16) << balance << setw(24) << interest << endl;


    }
    return 0;
}





