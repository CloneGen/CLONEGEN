int fun (int m, int n) {
    if (m > sqrt (n))
        return 0;
    if (n % m == 0)
        return fun (m + 1, n) + fun (m, n / m) + 1;
    else
        return fun (m + 1, n);
}

main () {
    int i, x, y;
    cin >> x;
    for (i = 1; i <= x; i++) {
        cin >> y;
        cout << fun (2, y) + 1 << endl;
    }
    return 0;
}

