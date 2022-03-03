int main () {
    int n, x, i;
    cin >> n;
    int godbah (int);
    for (i = 6; i <= n; i = i + 2) {
        x = godbah (i);
        cout << i << '=' << x << '+' << i - x << endl;
    }
    return 0;
}

int prime (int n) {
    int i, p = 1, k = (int) sqrt (n);
    for (i = 2; i <= k; i++) {
        if (n % i == 0) {
            p = 0;
            break;
        }
    }
    return p;
}

int godbah (int n) {
    int a, q;
    for (a = 3; a <= n / 2; a = a + 2) {
        if (prime (a) == 1 && prime (n - a) == 1) {
            q = a;
            break;
        }
    }
    return q;
}

