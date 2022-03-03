int m, n, a [10000], b [10000];

void input () {
    cin >> m >> n;
    for (int i = 0;
    i < m; i++)
        cin >> a[i];
    for (int i = 0;
    i < n; i++)
        cin >> b[i];
}

void sequence () {
    for (int i = 0;
    i < m - 1; i++)
        for (int j = m - 1;
        j > i; j--)
            if (a[j - 1] > a[j]) {
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
    for (int i = 0;
    i < n - 1; i++)
        for (int j = n - 1;
        j > i; j--)
            if (b[j - 1] > b[j]) {
                int temp = b[j - 1];
                b[j - 1] = b[j];
                b[j] = temp;
            }
}

void combination () {
    for (int i = m;
    i < m + n; i++)
        a[i] = b[i - m];
}

void output () {
    cout << a[0];
    for (int i = 1;
    i < m + n; i++)
        cout << ' ' << a[i];
    cout << endl;
}

int main () {
    input ();
    sequence ();
    combination ();
    output ();
    return 0;
}

