int main () {
    int n, i;
    double M [4], y [100], m [4] = {0, 0, 0, 0};
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> y[i];
        if (y[i] <= 18)
            m[0]++;
        else if (y[i] <= 35)
            m[1]++;
        else if (y[i] <= 60)
            m[2]++;
        else
            m[3]++;
    }
    cout << fixed << setprecision (2);
    for (i = 0; i < 4; i++) {
        M[i] = (m[i] * 100) / n;
    }
    cout << "1-18: " << M[0] << "%" << endl;
    cout << "19-35: " << M[1] << "%" << endl;
    cout << "36-60: " << M[2] << "%" << endl;
    cout << "60??: " << M[3] << "%" << endl;
    return 0;
}

