int main () {
    double n, sum, k;
    int i;
    sum = 0, k = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        k = k + 1;
        if (i % 7 == 0 || (i - 7) % 10 == 0 || (i - 70) >= 0 && (i - 70) <= 9)
            continue;
        sum = sum + pow (k, 2);
    }
    cout << sum << endl;
    return 0;
}

