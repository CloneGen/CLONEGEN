int main () {
    int i, first;
    int mon [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int every13 [13];
    cin >> first;
    every13[1] = first + 12 % 7;
    if (every13[1] > 7)
        every13[1] = every13[1] - 7;
    for (i = 2; i <= 12; i++) {
        every13[i] = every13[i - 1] + mon[i - 1] % 7;
        if (every13[i] > 7)
            every13[i] = every13[i] - 7;
    }
    for (i = 1; i <= 12; i++)
        if (every13[i] == 5)
            cout << i << endl;
    return 0;
}

