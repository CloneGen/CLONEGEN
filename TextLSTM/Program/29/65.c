float Sn (int n) {
    float s [n + 1];
    s[0] = 1;
    s[1] = 2;
    for (int k = 0;
    k < n; k++)
        s[k + 2] = s[k] + s[k + 1];
    float p = 0;
    for (int k = 0;
    k < n; k++)
        p = p + s[k + 1] / s[k];
    return p;
}

int main () {
    int m;
    cin >> m;
    int a [m];
    for (int k = 0;
    k < m; k++)
        cin >> a[k];
    for (int k = 0;
    k < m; k++) {
        printf ("%.3f", Sn (a[k]));
        printf ("\n");
    }
    return 0;
}

