int main () {
    int month [12];
    month[0] = 31;
    month[1] = 28;
    month[2] = 31;
    month[3] = 30;
    month[4] = 31;
    month[5] = 30;
    month[6] = 31;
    month[7] = 31;
    month[8] = 30;
    month[9] = 31;
    month[10] = 30;
    month[11] = 31;
    int a;
    cin >> a;
    int date [12], i;
    date[0] = 12;
    for (i = 1; i <= 11; i++) {
        date[i] = date[i - 1] + month[i - 1];
    }
    for (i = 0; i <= 11; i++) {
        if (((date[i] % 7) + a) % 7 == 5) {
            cout << i + 1 << endl;
        }
    }
    return 0;
}

