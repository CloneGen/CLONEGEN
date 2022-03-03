int main () {
    double a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0, x3 = 0.0;
    int n = 1, n1 = 1;
    cin >> n;
    while (cin >> a >> b >> c, n1 <= n) {
        if ((b * b - 4 * a * c) > 0) {
            x1 = (-1 * b + sqrt (b * b - 4 * a * c)) / (2 * a);
            x2 = (-1 * b - sqrt (b * b - 4 * a * c)) / (2 * a);
            printf ("x1=%.5f", x1);
            cout << ";";
            printf ("x2=%.5f", x2);
            cout << endl;
        }
        else if ((b * b - 4 * a * c) == 0.0) {
            if ((-1 * b) / (2 * a) == 0)
                cout << "x1=x2=" << 0 << endl;
            else {
                x1 = (-1 * b) / (2 * a);
                printf ("x1=x2=%.5f", x1);
                cout << endl;
            }
        }
        else {
            x3 = sqrt (-(b * b - 4 * a * c)) / (2 * a);
            if ((-1 * b) / (2 * a) == 0) {
                x1 = 0.0;
                printf ("x1=%.5f", x1);
                printf ("+%.5f", x3);
                cout << "i" << ";";
                printf ("x2=%.5f", x1);
                printf ("-%.5f", x3);
                cout << "i" << endl;
            }
            else {
                x1 = (-1 * b) / (2 * a);
                printf ("x1=%.5f", x1);
                printf ("+%.5f", x3);
                cout << "i" << ";";
                printf ("x2=%.5f", x1);
                printf ("-%.5f", x3);
                cout << "i" << endl;
            }
        }
        n1++;
    }
    return 0;
}

