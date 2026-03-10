#include <iostream>

using namespace std;

int main()
{
    int computerAmount, peripherals;
    bool isBusinessHours, isDropOff;
    float baseFee = 0, additionalFee = 0;
    float totalCost;

    cout << "jumlah komputer: ";
    cin >> computerAmount;
    cout << "jumlah peripheral: ";
    cin >> peripherals;
    cout << "apakah jam bisnis? (1=ya , 0=tidak): ";
    cin >> isBusinessHours;
    cout << "apakah pelanggan drop off/ pick up sendiri? (1=ya , 0=tidak): ";
    cin >> isDropOff;

    if (computerAmount >= 1 && computerAmount <= 2){
        baseFee = 50;
        additionalFee = 0;
    }else if (computerAmount >= 3 && computerAmount <= 10){
        baseFee = 100;
        additionalFee = 10 * peripherals;
    }else if (computerAmount > 10){
        baseFee = 500;
        additionalFee = 10 * peripherals;
    }

    if (!isBusinessHours){
        baseFee = baseFee * 2;

    }

    if (isDropOff){
        baseFee = baseFee * 0.5;
    }

    totalCost = baseFee + additionalFee;

    cout << "Rincian Biaya" << endl;
    cout << "Base fee akhir: " << baseFee << endl;
    cout << "additional Fee: " << additionalFee << endl;
    cout << "Total Biaya: " << totalCost << endl;

    return 0;
}
