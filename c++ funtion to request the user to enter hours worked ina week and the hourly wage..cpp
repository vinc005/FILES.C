\*
Author:Vincent Lochaki
Description: A c++ function that requests the user to enter the hours worked in a week
 and the hourly wage.
Date:6/9/2025.
version 1.
*\

#include <iostream>
using namespace std;

void calculatePay() {
    double hoursWorked, hourlyWage, grossPay, taxes, netPay;

    // Get user input
    cout << "Enter hours worked in a week: ";
    cin >> hoursWorked;
    cout << "Enter hourly wage: ";
    cin >> hourlyWage;

    // Calculate gross pay with overtime consideration
    if (hoursWorked > 40) {
        double overtimeHours = hoursWorked - 40;
        double overtimePay = overtimeHours * (hourlyWage * 1.5);
        double regularPay = 40 * hourlyWage;
        grossPay = regularPay + overtimePay;
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Print results
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net Pay: $" << netPay << endl;
}

int main() {
    calculatePay();
    return 0;
}