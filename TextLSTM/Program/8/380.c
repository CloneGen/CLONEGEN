int a [100];

void ranking (int n, int m) {
    int i, j, p;
    for (i = n; i < m; i++)
        cin >> a[i];
    for (i = 0; i < m - 1; i++)
        for (j = n; j < m - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                p = a[j];
                a[j] = a[j + 1];
                a[j + 1] = p;
            }
        }
}

int main () {
    int n, m, i;
    cin >> n >> m;
    ranking (0, n);
    ranking (n, n + m);
    cout << a[0];
    for (i = 1; i < m + n; i++)
        cout << " " << a[i];
}

