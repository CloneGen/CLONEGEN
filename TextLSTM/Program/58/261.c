int main () {
    char a [81];
    int n, p1, p2, p3, q, b = 0, i, l, t;
    cin >> n;
    cin.getline (a, 81);
    while (n > 0) {
        cin.getline (a, 81);
        l = strlen (a);
        if (l == 1)
            b = 1;
        else {
            for (i = 1; i < l; i++) {
                t = a[i];
                p1 = (t >= 'a') && (t <= 'z');
                p2 = (t >= 'A') && (t <= 'Z');
                p3 = (t >= '0') && (t <= '9');
                q = (t == '_');
                if (p1 || p2 || p3 || q)
                    b = 1;
                else {
                    b = 0;
                    break;
                }
            }
        }
        t = a[0];
        p1 = (t >= 'a') && (t <= 'z');
        p2 = (t >= 'A') && (t <= 'Z');
        p3 = (t >= '0') && (t <= '9');
        q = (t == '_');
        if ((p1 || p2 || q) && b)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        n--;
    }
    return 0;
}

