int main () {
    int n;
    cin >> n;
    double a, b, c, x1, x2, d, e;
    for (int i = 1;
    i <= n; i++) {
        cin >> a >> b >> c;
        if (b * b - 4 * a * c > 0) {
            x1 = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
            cout << "x1=";
            printf ("%.5f", x1);
            cout << ";x2=";
            printf ("%.5f\n", x2);
        }
        if (b * b - 4 * a * c == 0) {
            x1 = (-b) / (2 * a);
            cout << "x1=x2=";
            printf ("%.5f\n", x1);
        }
        if (b * b - 4 * a * c < 0) {
            d = sqrt (4 * a * c - b * b) / (2 * a);
            e = (-b) / (2 * a);
            if (e == 0)
                e = 0;
            x1 = e + d * i;
            x2 = e - d * i;
            cout << "x1=";
            printf ("%.5f", e);
            cout << "+";
            printf ("%.5f", d);
            cout << "i;x2=";
            printf ("%.5f", e);
            cout << "-";
            printf ("%.5f", d);
            cout << "i" << endl;
        }
    }
    return 0;
}

