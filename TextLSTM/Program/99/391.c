int main () {
    int n, i = 0, s;
    double a = 0, b = 0, c = 0, d = 0, e, f, g, h;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> s;
        if (s < 19)
            a = a + 1;
        else if (s < 36)
            b = b + 1;
        else if (s < 61)
            c = c + 1;
        else
            d = d + 1;
    }
    e = a / n * 100;
    f = b / n * 100;
    g = c / n * 100;
    h = d / n * 100;
    cout << "1-18: ";
    printf ("%.2f", e);
    cout << "%" << endl;
    cout << "19-35: ";
    printf ("%.2f", f);
    cout << "%" << endl;
    cout << "36-60: ";
    printf ("%.2f", g);
    cout << "%" << endl;
    cout << "60??: ";
    printf ("%.2f", h);
    cout << "%" << endl;
    return 0;
}

