int main () {
    double k, b = 0, c = 0, d = 0, e = 0;
    cin >> k;
    for (int i = 0;
    i < k; i++) {
        int a;
        cin >> a;
        if (a >= 1 && a <= 18)
            b = b + 1;
        if (a >= 19 && a <= 35)
            c = c + 1;
        if (a >= 36 && a <= 60)
            d = d + 1;
        if (a > 60)
            e = e + 1;
    }
    double A, B, C, D;
    A = b * 100 / (b + c + d + e);
    B = c * 100 / (b + c + d + e);
    C = d * 100 / (b + c + d + e);
    D = e * 100 / (b + c + d + e);
    cout << fixed;
    cout << setprecision (2);
    cout << "1-18: " << A << "%" << endl;
    cout << "19-35: " << B << "%" << endl;
    cout << "36-60: " << C << "%" << endl;
    cout << "60??: " << D << "%" << endl;
    return 0;
}

