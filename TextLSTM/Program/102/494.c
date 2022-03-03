int main () {
    int n, m, o, i, j;
    double a [81] = {0};
    double male [50], female [50];
    char b [41] [7];
    cin >> n;
    m = 0;
    o = 0;
    for (i = 1; i <= n; i++) {
        cin >> b[i];
        if (b[i][0] == 'm') {
            m++;
            cin >> male[m];
        }
        if (b[i][0] == 'f') {
            o++;
            cin >> female[o];
        }
    }
    sort (male + 1, male + m + 1);
    sort (female + 1, female + o + 1);
    for (i = 1; i <= m; i++) {
        cout << fixed;
        cout << setprecision (2) << male[i] << " ";
    }
    for (i = o; i >= 2; i--) {
        cout << fixed;
        cout << setprecision (2) << female[i] << " ";
    }
    if (o > 0) {
        cout << fixed;
        cout << setprecision (2) << female[1] << endl;
    }
    return 0;
}

