int main () {
    char a;
    int c [200], ans [200];
    int l = 0, s, m;
    while (scanf ("%c", &a) && a != '\n') {
        c[l++] = a - '0';
    }
    m = 0;
    for (int i = 0;
    i < l; i++) {
        c[i] += m * 10;
        m = c[i] % 13;
        ans[i] = c[i] / 13;
    }
    for (s = 0; s < l; s++) {
        if (ans[s] != 0)
            break;
    }
    if (s == l)
        cout << 0 << endl;
    else {
        for (int i = s;
        i < l; i++)
            cout << ans[i];
        cout << endl;
    }
    cout << m << endl;
    return 0;
}

