int main () {
    int n;
    cin >> n;
    while (n--) {
        double a, b, c, d, e, delt = 0.0, x1, x2;
        cin >> a >> b >> c;
        delt = b * b - 4 * a * c;
        if (delt == 0) {
            x1 = x2 = (-b) / (2 * a);
            printf ("x1=x2=%.5f\n", x1);
        }
        else if (delt < 0) {
            d = (-b) / (2 * a), e = sqrt (4 * a * c - b * b) / (2 * a);
            if (d <= 0 && d > -0.000001)
                d = 0.0000001;
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", d, e, d, e);
        }
        else {
            x1 = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
            printf ("x1=%.5f;x2=%.5f\n", x1, x2);
        }
    }
}

