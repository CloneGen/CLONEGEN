int factorization (int a, int k);

int main () {
    int n, a;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a;
        cout << factorization (a, 2) << endl;
    }
    return 0;
}

int factorization (int a, int k) {
    int sum = 1;
    if (a == 1) {
        return 0;
    }
    if (a == 2) {
        return 1;
    }
    int b = (int) sqrt ((double) a);
    for (int i = k;
    i <= b; i++) {
        if (a % i == 0) {
            sum += factorization (a / i, i);
        }
    }
    return sum;
}

