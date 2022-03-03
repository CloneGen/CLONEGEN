int main () {
    int month [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, week [13];
    int w, i, j;
    cin >> w;
    week[1] = w;
    for (i = 1; i <= 12; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            week[i + 1] = (week[i] + 3) % 7;
        }
        if (i == 4 || i == 6 || i == 9 || i == 11) {
            week[i + 1] = (week[i] + 2) % 7;
        }
        if (i == 2) {
            week[i + 1] = week[i];
        }
    }
    for (i = 1; i <= 12; i++) {
        if (week[i] == 0 || week[i] == 7)
            cout << i << endl;
    }
    return 0;
}

