int main () {
    int a, x1, x2, x3, i, j, n;
    cin >> n;
    for (i = 1; i <= n; i = i + 1) {
        cin >> a;
        x1 = 1;
        x2 = 1;
        if (a == 1 || a == 2)
            cout << "1" << endl;
        else {
            for (j = 1; j <= a - 2; j = j + 1) {
                x3 = x1 + x2;
                x1 = x2;
                x2 = x3;
            }
            cout << x3 << endl;
        }
    }
    return 0;
}

