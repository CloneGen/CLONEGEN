int main () {
    char a [81], b [81];
    int i, m, n, t, k;
    cin.getline (a, 81);
    cin.getline (b, 81);
    m = strlen (a);
    n = strlen (b);
    if (n < m) {
        t = m;
        m = n;
        n = t;
    }
    for (i = 0; i < m; i++) {
        if (a[i] >= 65 && a[i] <= 90)
            a[i] = a[i] + 32;
        if (b[i] >= 65 && b[i] <= 90)
            b[i] += 32;
    }
    k = strcmp (a, b);
    if (k == 1)
        cout << ">";
    else if (k == 0)
        cout << "=";
    else
        cout << "<";
    return 0;
}

