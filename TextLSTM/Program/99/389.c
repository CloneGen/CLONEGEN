int main () {
    int x, k = 1;
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0, n;
    cin >> n;
    {
        while (k <= n) {
            cin >> x;
            if (x <= 18) {
                a = a + 1;
            }
            else if (19 <= x && x <= 35) {
                b = b + 1;
            }
            else if (36 <= x && x <= 60) {
                c = c + 1;
            }
            else {
                d = d + 1;
            }
            k = k + 1;
        }
        double A, B, C, D;
        A = a / n * 100;
        B = b / n * 100;
        C = c / n * 100;
        D = d / n * 100;
        cout << fixed;
        cout << "1-18: " << setprecision (2) << A << "%" << endl;
        cout << "19-35: " << setprecision (2) << B << "%" << endl;
        cout << "36-60: " << setprecision (2) << C << "%" << endl;
        cout << "60??: " << setprecision (2) << D << "%" << endl;
    }
    return 0;
}

