#include <iostream>
#include <string>
using namespace std;

int getNumber();
string makeRomNum1(int& num);
string makeRomNum10(int& num);
string makeRomNum100(int& num);
string makeRomNum1000(int& num);

int main() {
    int number = getNumber();
    while (number < 4000 && number > 0) {
        int ones = number % 10;
        int tens = number % 100 - ones;
        int hund = number % 1000 - tens - ones;
        int thou = number % 10000 - hund - tens - ones;
        cout << makeRomNum1000(thou) << makeRomNum100(hund) << makeRomNum10(tens) << makeRomNum1(ones) << endl;
        number = getNumber();
    }
    return 0;
}

int getNumber() {
    int num;
    cout << "Enter a number between 1 and 3999: ";
    cin >> num;
    return num;
}

string makeRomNum1(int& num) {
    string rom = "";
    if (num == 9) {
        return "IX";
    }
    if (num >= 5) {
        rom += "V";
        num -= 5;
    }
    if (num == 4) {
        return "IV";
    }
    for (int i = num; i > 0; i--) {
        rom += "I";
    }
    return rom;
}

string makeRomNum10(int& num) {
    string rom = "";
    if (num == 90) {
        return "XC";
    }
    if (num >= 50) {
        rom += "L";
        num -= 50;
    }
    if (num == 40) {
        return "XL";
    }
    for (int i = num; i > 0; i -= 10) {
        rom += "X";
    }
    return rom;
}

string makeRomNum100(int& num) {
    string rom = "";
    if (num == 900) {
        return "CM";
    }
    if (num >= 500) {
        rom += "D";
        num -= 500;
    }
    if (num == 400) {
        return "CD";
    }
    for (int i = num; i > 0; i -= 100) {
        rom += "C";
    }
    return rom;
}

string makeRomNum1000(int& num) {
    string rom = "";
    for (int i = num; i > 0; i -= 1000) {
        rom += "M";
    }
    return rom;
}