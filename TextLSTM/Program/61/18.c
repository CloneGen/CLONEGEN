int main () {
    int n, i, j, a;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        int fibo [a + 1];
        fibo[0] = 0;
        fibo[1] = 1;
        for (j = 2; j <= a; j++)
            fibo[j] = fibo[j - 1] + fibo[j - 2];
        cout << fibo[a] << endl;
    }
    return 0;
}

