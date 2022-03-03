int main () {
    int c1 = 0, c2 = 0, t = 1;
    int a, b, c, i, n;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a >> b;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
            c = 1;
        else
            c = 0;
        if (t == 1) {
            if (c == 1) {
                c1 = c1 + 1;
                t = 1;
            }
            else
                t = 0;
        }
        else {
            if (c1 > c2)
                c2 = c1;
            c1 = 0;
            if (c == 1) {
                c1 = c1 + 1;
                t = 1;
            }
            else
                t = 0;
        }
        if (c1 > c2)
            c2 = c1;
    }
    cout << c2 << endl;
    return 0;
}

