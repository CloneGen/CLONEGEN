int main () {
    int number, digit [6], nDigit, revNumber;
    cin >> number;
    digit[1] = number / 10000;
    digit[2] = (number % 10000) / 1000;
    digit[3] = ((number % 10000) % 1000) / 100;
    digit[4] = (((number % 10000) % 1000) % 100) / 10;
    digit[5] = (((number % 10000) % 1000) % 100) % 10;
    if (number > 9999)
        nDigit = 5;
    if (number > 999 && number <= 9999)
        nDigit = 4;
    if (number > 99 && number <= 999)
        nDigit = 3;
    if (number > 9 && number <= 99)
        nDigit = 2;
    if (number > 0 && number <= 9)
        nDigit = 1;
    revNumber = digit[5] * pow (10.0, nDigit - 1) + digit[4] * pow (10.0, nDigit - 2) + digit[3] * pow (10.0, nDigit - 3) + digit[2] * pow (10.0, nDigit - 4) + digit[1] * pow (10.0, nDigit - 5);
    cout << revNumber;
    return 0;
}

