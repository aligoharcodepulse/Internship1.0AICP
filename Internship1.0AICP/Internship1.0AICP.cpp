#include <iostream>
#include<istream>
using namespace std;
int main()
{
    int arrivalTime, numberofHours, frequentNumber = 1234, priceperHour = 2;
    double amountToPay, dailyTotal{};
    string  dayofWeek;


    cout << "\n Arrival Time: ";
    cin >> arrivalTime;

    cout << "\n Number of Hour plan to leave car in car Park: ";
    cin >> numberofHours;

    cout << "Frequent Parking Number is:";
    cin >> frequentNumber;

    if (frequentNumber == 1234)
    {
        amountToPay = priceperHour * numberofHours * 0.9;
        dailyTotal += amountToPay;
        cout << "Amount Paid will be: " << amountToPay;
    }
    else
    {
        amountToPay = priceperHour * numberofHours;
        dailyTotal += amountToPay;
        cout << "Amount Paid will be: " << amountToPay;
    }

    cout << "\n Today is: ";
    cin >> dayofWeek;


    if ((dayofWeek == "monday" || dayofWeek == "sunday") && (arrivalTime >= 8 && arrivalTime <= 16))
    {
        amountToPay = priceperHour * numberofHours * 0.9;
        dailyTotal += amountToPay;
        cout << "Amount that must be paid: " << amountToPay;
    }

    else if ((dayofWeek == "saturday" || dayofWeek == "tuesday" || dayofWeek == "wednesday" || dayofWeek == "thursday" || dayofWeek == "friday") && (arrivalTime >= 8 && arrivalTime <= 16))
    {
        priceperHour = 10;
        amountToPay = priceperHour * numberofHours * 0.9;
        dailyTotal += amountToPay;
        cout << "Parking Charges: " << amountToPay;
    }

    else if ((arrivalTime > 16 && arrivalTime <= 24) && (dayofWeek == "monday" || dayofWeek == "tuesday" || dayofWeek == "wednesday" || dayofWeek == "thursday" || dayofWeek == "friday" || dayofWeek == "saturday" || dayofWeek == "sunday"))
    {
        priceperHour = 2;
        amountToPay = priceperHour * numberofHours * 0.5;
        dailyTotal += amountToPay;
        cout << "Amount to Pay: " << amountToPay;
    }


    else if (arrivalTime > 0 && arrivalTime < 8)
    {
        cout << "No parking is allowed";
    }
    cout << "\n Daily total: " << dailyTotal;
    return 0;
}

