int main () {
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++) {
        int a, p = 1, q = 1, o, j;
        cin >> a;
        for (j = 1; j <= a; j++) {
            if (j == 1 || j == 2)
                p = 1;
            else {
                o = p;
                p = p + q;
                q = o;
            }
        }
        cout << p << endl;
    }
    return 0;
}

