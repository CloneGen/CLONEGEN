int main () {
    int n, i, line = 0, m;
    char a [45], *p;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        p = a;
        if (line == 0)
            m = 0;
        else
            m = 1;
        while (*p != '\0') {
            p++;
            m++;
        }
        if (line + m <= 80) {
            if (line != 0)
                cout << ' ';
            line = line + m;
            cout << a;
        }
        else {
            line = m - 1;
            cout << '\n' << a;
        }
    }
    return 0;
}

