int main () {
    int m, pin;
    cin >> m;
    for (int i = 3;
    i <= m / 2; i += 2) {
        pin = 0;
        for (int k = 2;
        k * k <= i; k++) {
            if (i % k == 0)
                pin = 1;
        }
        for (int l = 2;
        l * l <= (m - i); l++) {
            if ((m - i) % l == 0)
                pin = 1;
        }
        if (pin == 0)
            cout << i << " " << m - i << endl;
    }
    return 0;
}

