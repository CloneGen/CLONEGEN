int main () {
    int w, i, j, days, month [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> w;
    for (i = 1; i <= 12; i++) {
        days = 12;
        for (j = 1; j < i; j++) {
            days += month[j];
        }
        days %= 7;
        if ((w + days) % 7 == 5)
            cout << i << endl;
    }
    return 0;
}

