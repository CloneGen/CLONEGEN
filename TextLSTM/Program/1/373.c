int g = 0;

void s (int n, int z) {
    for (int i = 2;
    i <= sqrt (n); i++) {
        if (n % i == 0 && i >= z) {
            g = g + 1;
            s (n / i, i);
        }
    }
}

int main () {
    int a, b;
    cin >> a;
    while (cin >> b) {
        for (int j = 2;
        j <= sqrt (b); j++) {
            if (b % j == 0) {
                g = g + 1;
                s (b / j, j);
            }
        }
        cout << g + 1 << endl;
        g = 0;
    }
    return 0;
}

