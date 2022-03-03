int main () {
    int n, a, i, j, a1 = 1, a2 = 1, a3;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        if (a == 1 || a == 2)
            cout << "1" << endl;
        else {
            for (j = 3; j <= a; j++) {
                a3 = a1 + a2;
                a1 = a2;
                a2 = a3;
            }
            cout << a3 << endl;
            a1 = 1;
            a2 = 1;
        }
    }
    return 0;
}

