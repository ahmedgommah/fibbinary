#include<iostream>
int main () {
    int ID;
    float nHours, hourlyRate, grossPay, tax, netPay;
    std::cout << "\nWelcome to FCI Training Payment System\n\n";
    std::cout << "Please enter employee ID: ";
    std::cin  >> ID;
    std::cout << "Please enter number of hours: ";
    std::cin  >> nHours;
    std::cout << "Please enter hourly rate: ";
    std::cin  >> hourlyRate;

    grossPay = nHours * hourlyRate;
    tax      = grossPay * 0.1;
    netPay   = grossPay - tax;

    std::cout << "\nPayment of Employee " << ID << " = " << netPay << std::endl;
}
