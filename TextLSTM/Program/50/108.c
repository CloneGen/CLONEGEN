int main () {
    int days [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int a [12] = {13};
    int w, i;
    for (i = 1; i <= 11; i++) {
        a[i] = a[i - 1] + days[i - 1];
    }
    cin >> w;
    for (i = 0; i <= 11; i++) {
        if ((a[i] - 1 + w) % 7 == 5) {
            cout << i + 1 << endl;
        }
    }
    return 0;
}

