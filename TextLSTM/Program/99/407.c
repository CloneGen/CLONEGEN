int main () {
    int n, i, y;
    cin >> n;
    double a, b, c, d;
    a = 0, b = 0, c = 0, d = 0;
    for (i = 1; i <= n; i++) {
        cin >> y;
        if (y <= 18)
            a = a + 1;
        else if (y >= 19 && y <= 35)
            b = b + 1;
        else if (y >= 36 && y <= 60)
            c = c + 1;
        else
            d = d + 1;
    }
    cout << "1-18: " << fixed << setprecision (2) << 100 * a / n << "%" << endl;
    cout << "19-35: " << fixed << setprecision (2) << 100 * b / n << "%" << endl;
    cout << "36-60: " << fixed << setprecision (2) << 100 * c / n << "%" << endl;
    cout << "60??: " << fixed << setprecision (2) << 100 * d / n << "%" << endl;
    return 0;
}

