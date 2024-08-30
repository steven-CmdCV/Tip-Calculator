#include <iostream>

using namespace std;

int main(){

double billAmount;
double tipPercentage;
double tipAmount;
double totalAmount;

cout << "What is the bill amount?: ";
cin >> billAmount;
cout << "Introduce the percentage you would like to tip: ";
cin >> tipPercentage;

tipAmount = billAmount * (tipPercentage / 100);
totalAmount = billAmount + tipAmount;

cout << "The total bill is: " << totalAmount << endl;

    return 0;
}
