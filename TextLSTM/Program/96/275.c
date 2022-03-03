int main () {
    char numerator [101], quotient [101];
    int remainder = 0;
    int i;
    cin >> numerator;
    for (i = 0; numerator[i] != '\0'; i++) {
        quotient[i] = (remainder * 10 + (numerator[i] - '0')) / 13 + '0';
        remainder = (remainder * 10 + (numerator[i] - '0')) % 13;
    }
    quotient[i] = '\0';
    i = 0;
    while (quotient[i] == '0')
        i++;
    if (quotient[i] == '\0')
        cout << "0";
    else
        do {
            cout << quotient[i];
            i++;
        }
        while (quotient[i] != '\0');
    cout << endl << remainder << endl;
    return 0;
}

