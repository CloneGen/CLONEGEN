int main () {
    int x [10], y [10], z [10], n, num = 0;
    double a [10] [10], b [45];
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    for (int i = 0;
    i < n; i++) {
        for (int j = i + 1;
        j < n; j++) {
            a[i][j] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            b[num] = a[i][j];
            num++;
        }
    }
    double p;
    for (int i = 0;
    i < num - 1; i++) {
        for (int j = 0;
        j < num - 1 - i; j++) {
            if (b[j] < b[j + 1]) {
                p = b[j];
                b[j] = b[j + 1];
                b[j + 1] = p;
            }
        }
    }
    for (int k = 0;
    k < num; k++) {
        if (b[k] == b[k + 1])
            continue;
        else {
            for (int i = 0;
            i < n; i++) {
                for (int j = 0;
                j < n; j++) {
                    if (a[i][j] == b[k]) {
                        cout << "(" << x[i] << "," << y[i] << "," << z[i] << ")" << "-" << "(" << x[j] << "," << y[j] << "," << z[j] << ")=";
                        printf ("%.2lf", b[k]);
                        cout << '\n';
                    }
                }
            }
        }
    }
    return 0;
}

