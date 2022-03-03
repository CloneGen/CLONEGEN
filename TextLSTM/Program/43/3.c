int main () {
    int n, a, b, i, j, k, open;
    cin >> n;
    for (k = 3; k <= n / 2; k = a + 2) {
        for (a = k; a <= n / 2; a += 2) {
            for (i = 2; i < a; i++) {
                if (a % i == 0)
                    break;
            }
            if (i == a) {
                open = 1;
                break;
            }
        }
        b = n - a;
        for (j = 2; j < b; j++) {
            if (b % j == 0)
                break;
        }
        if ((j == b) && (open == 1)) {
            cout << a << " ";
            cout << b << endl;
        }
        open = 0;
    }
    return 0;
}

