int n, m;
int a [100], b [100];

void shuru () {
    int i;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= m; i++)
        cin >> b[i];
}

void paixu () {
    int i, j;
    for (i = 1; i < n; i++)
        for (j = i + 1; j <= n; j++) {
            if (a[i] > a[j]) {
                a[0] = a[i];
                a[i] = a[j];
                a[j] = a[0];
            }
        }
    for (i = 1; i < m; i++)
        for (j = i + 1; j <= m; j++) {
            if (b[i] > b[j]) {
                b[0] = b[i];
                b[i] = b[j];
                b[j] = b[0];
            }
        }
}

void hebin () {
    int i;
    for (i = n + 1; i <= n + m; i++) {
        a[i] = b[i - n];
    }
}

void shuchu () {
    int i;
    for (i = 1; i <= m + n - 1; i++)
        cout << a[i] << ' ';
    cout << a[m + n] << endl;
}

int main () {
    shuru ();
    paixu ();
    hebin ();
    shuchu ();
    return 0;
}

