int main () {
    int w, i, j, t [13] = {0};
    int a [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> w;
    for (i = 1; i <= 12; i++) {
        for (j = 1; j <= i - 1; j++) {
            t[i] = t[i] + a[j];
        }
        t[i] = t[i] + 12 + w;
    }
    for (i = 1; i <= 12; i++) {
        if (t[i] % 7 == 5) {
            cout << i << endl;
        }
    }
    return 0;
}

