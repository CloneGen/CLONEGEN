int main () {
    int m, n;
    cin >> m;
    for (int i = 1;
    i <= m; i++) {
        cin >> n;
        float a = 1, b = 2, s = 0, t;
        for (int j = 1;
        j <= n; j++) {
            s = s + b / a;
            t = b;
            b = a + b;
            a = t;
        }
        printf ("%.3f", s);
        cout << endl;
    }
    return 0;
}

