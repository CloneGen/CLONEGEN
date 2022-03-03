int main (void) {
    int n;
    double a, b, c;
    double x1, x2;
    double delta, front, back;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a >> b >> c;
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            front = -b / (2 * a);
            if (front == 0)
                front = -front;
            back = sqrt (-delta) / (2 * a);
            cout << fixed << setprecision (5) << "x1=" << front << '+' << back << "i;";
            cout << fixed << setprecision (5) << "x2=" << front << '-' << back << 'i' << endl;
        }
        else {
            if (delta == 0) {
                x1 = -b / (2 * a);
                cout << fixed << setprecision (5) << "x1=x2=" << x1 << endl;
            }
            else {
                x1 = (-b + sqrt (delta)) / (2 * a);
                x2 = (-b - sqrt (delta)) / (2 * a);
                cout << fixed << setprecision (5) << "x1=" << x1 << ';' << "x2=" << x2 << endl;
            }
        }
    }
    return 0;
}

