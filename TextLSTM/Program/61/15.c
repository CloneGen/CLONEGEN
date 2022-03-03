int main () {
    int n = 0, a = 0, b = 1, x1 = 1, x2 = 1, x3 = 1;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a;
        if (a == 1 || a == 2)
            cout << "1" << endl;
        else {
            for (int k = 1;
            k <= a - 2; k++) {
                x3 = x1 + x2;
                x1 = x2;
                x2 = x3;
            }
            b = x3;
            cout << b << endl;
            x1 = 1, x2 = 1, x3 = 1;
        }
    }
    return 0;
}

