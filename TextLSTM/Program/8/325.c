int m = 0, n = 0, i = 0;
int a [1000], b [1000];

void duru1 () {
    cin >> m;
    cin >> n;
    for (i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }
}

void paixu (int a [], int geshu) {
    int j = 0, k = 0, t = 0;
    for (j = 0; j < geshu - 1; j++) {
        for (k = j + 1; k < geshu; k++) {
            if (a[k] < a[j]) {
                t = a[k];
                a[k] = a[j];
                a[j] = t;
            }
        }
    }
}

void shuchu () {
    for (i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    for (i = 0; i < n - 1; i++) {
        cout << b[i] << " ";
    }
    cout << b[n - 1];
}

int main () {
    duru1 ();
    paixu (a, m);
    paixu (b, n);
    shuchu ();
    return 0;
}

