int main () {
    int n, m, len, i, t;
    char a [100] [80];
    cin >> n;
    cin.get ();
    m = n;
    while (m > 0) {
        t = 0;
        cin.getline (a[n - m], 81, '\n');
        len = strlen (a[n - m]);
        if ((a[n - m][0] == '_') || ((a[n - m][0] >= 'A') && (a[n - m][0] <= 'Z')) || ((a[n - m][0] >= 'a') && (a[n - m][0] <= 'z'))) {
            for (i = 1; i < len; i++) {
                if ((a[n - m][i] == '_') || ((a[n - m][i] >= 'A') && (a[n - m][i] <= 'Z')) || ((a[n - m][i] >= 'a') && (a[n - m][i] <= 'z')) || ((a[n - m][i] >= '0') && (a[n - m][i] <= '9')))
                    t++;
            }
            if (t == len - 1)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << 0 << endl;
        m--;
    }
    return 0;
}

