int main () {
    int m;
    char *p, *w, q [100];
    cin.getline (q, 100);
    m = strlen (q);
    w = &q[100];
    p = &q[100];
    for (p = q; p < q + m; p++) {
        if (*p == ' ') {
            for (w = p + 1; *w == ' '; w++) {
                *w = '1';
            }
        }
    }
    for (w = q; w < q + m; w++) {
        if (*w != '1')
            cout << *w;
    }
    return 0;
}

