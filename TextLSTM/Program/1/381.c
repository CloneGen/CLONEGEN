int Factorization (int n, int k) {
    int sum = 0;
    if (n < k) {
        return 0;
    }
    if (n % k == 0) {
        if (n == k) {
            return 1;
        }
        else {
            sum = sum + Factorization (n, k + 1) + Factorization (n / k, k);
        }
    }
    else {
        sum = sum + Factorization (n, k + 1);
    }
    return sum;
}

int main () {
    int t, i, a;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> a;
        cout << Factorization (a, 2) << endl;
    }
    return 0;
}

