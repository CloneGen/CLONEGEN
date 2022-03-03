int main () {
    int i, n;
    double a, b, c, det;
    cin >> n;
    cout << fixed << setprecision (5);
    for (i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        det = b * b - 4 * a * c;
        if (det < 0) {
            if (a > 0)
                cout << "x1=" << b / a / (-2) + 1 - 1 << "+" << sqrt (fabs (det)) / a / 2 << "i;x2=" << -(b / a / 2) + 1 - 1 << -sqrt (fabs (det)) / a / 2 << "i" << endl;
            else
                cout << "x1=" << (-b) / a / 2 << "+" << sqrt (fabs (det)) / a / 2 << "i;x2=" << -(b / a / 2) << -sqrt (fabs (det)) / a / 2 << "i" << endl;
        }
        else if (det == 0)
            cout << "x1=x2=" << (-b) / a / 2 << endl;
        else
            cout << "x1=" << (-b + sqrt (b * b - 4 * a * c)) / (2 * a) << ";x2=" << (-b - sqrt (b * b - 4 * a * c)) / (2 * a) << endl;
    }
    return 0;
}

