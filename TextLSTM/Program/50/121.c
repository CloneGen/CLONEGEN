int main () {
    int jun1, month [13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    cin >> jun1;
    for (int i = 1;
    i <= 12; i++) {
        if (((month[i] + 12) % 7 + jun1) % 7 == 5)
            cout << i << endl;
    }
    return 0;
}

