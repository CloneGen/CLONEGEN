int a [300], b [300], m, n, i, j, t, c [300];

void f1 () {
    cin >> m >> n;
    for (i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }
}

void f2 () {
    for (i = 0; i < m - 1; i++) {
        for (j = i + 1; j <= m - 1; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j <= n - 1; j++) {
            if (b[i] > b[j]) {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
}

void f3 () {
    for (i = 0; i < m; i++) {
        c[i] = a[i];
    }
    for (i = m; i < m + n; i++) {
        c[i] = b[i - m];
    }
}

void f4 () {
    cout << c[0];
    for (i = 1; i < m + n; i++) {
        cout << ' ' << c[i];
    }
}

int main () {
    f1 ();
    f2 ();
    f3 ();
    f4 ();
}

