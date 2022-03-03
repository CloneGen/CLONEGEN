int main () {
    int i, n, f = 0;
    int x [10], y [10];
    float GPA, j = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x[i];
        f = f + x[i];
    }
    for (i = 0; i < n; i++)
        cin >> y[i];
    for (i = 0; i < n; i++) {
        if (y[i] >= 90 && y[i <= 100])
            j = j + 4 * x[i];
        if (y[i] >= 85 && y[i] <= 89)
            j = j + 3.7 * x[i];
        if (y[i] >= 82 && y[i] <= 84)
            j = j + 3.3 * x[i];
        if (y[i] >= 78 && y[i] <= 81)
            j = j + 3 * x[i];
        if (y[i] >= 75 && y[i] <= 77)
            j = j + 2.7 * x[i];
        if (y[i] >= 72 && y[i] <= 74)
            j = j + 2.3 * x[i];
        if (y[i] >= 68 && y[i] <= 71)
            j = j + 2 * x[i];
        if (y[i] >= 64 && y[i] <= 67)
            j = j + 1.5 * x[i];
        if (y[i] >= 60 && y[i] <= 63)
            j = j + 1 * x[i];
        if (y[i] < 60)
            j = j + 0 * x[i];
    }
    GPA = j / f;
    cout << fixed << setprecision (2) << GPA << endl;
    return 0;
}

