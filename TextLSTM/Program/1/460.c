int main () {
    int fenjie (int x, int y);
    int a, n, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        cout << fenjie (a, 2) << endl;
    }
    return 0;
}

int fenjie (int x, int y) {
    int b, i, count = 1;
    if (x == 1)
        return 0;
    if (x == 2)
        return 1;
    b = sqrt ((double) x);
    for (i = y; i <= b; i++) {
        if (x % i == 0) {
            count += fenjie (x / i, i);
        }
    }
    return count;
}

