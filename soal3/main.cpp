#include <iostream>


using namespace std;

int main()
{
    string saveAccount = "abc1234";
    string saveStatus = "valid";
    float amountOfSale= 250.0;

    string inputAccount;
    cout << "masukkan Account Number: ";
    cin >> inputAccount;

    if(inputAccount == saveAccount && saveStatus == "valid"){
        cout << "---INVOICE---" << endl;
        cout << "Account Number: " << inputAccount << endl;
        cout << "Amountn Of Sale: " << amountOfSale << endl;
    }else{
        cout << "Account tidak ditemukan atau status tidak valid!" << endl;
    }
    return 0;
}
