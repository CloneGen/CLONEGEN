int main () {
    int i = 0, j, k, count = 0, product [100] = {0}, remainder = 0, dividend;
    char num [100] = {0};
    do {
        cin.get (num[i]);
        i++;
    }
    while (num[i - 1] != '\n');
    if (i == 2)
        cout << "0" << '\n' << num[0] << "\n";
    else {
        dividend = (num[0] - 48) * 10 + (num[1] - 48);
        for (k = 0; k < i - 2; k++) {
            product[k] = floor (dividend / 13);
            remainder = dividend - 13 * product[k];
            dividend = remainder * 10 + (num[k + 2] - 48);
        }
        if ((product[0] == 0) && (product[1] == 0))
            cout << "0" << endl;
        if (product[0] != 0) {
            for (k = 0; k < i - 2; k++)
                cout << product[k];
            cout << endl;
        }
        if ((product[0] == 0) && (product[1] != 0)) {
            for (k = 1; k < i - 2; k++)
                cout << product[k];
            cout << endl;
        }
        cout << remainder << endl;
    }
    return 0;
}

