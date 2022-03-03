int main () {
    int N, k, i, j, m;
    cin >> N;
    const  int n = N;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (j = 0; j < n; j++) {
        if (a[j] != k) {
            cout << a[j];
            m = j + 1;
            break;
        }
    }
    for (m;
    m < n; m++) {
        if (a[m] != k)
            cout << " " << a[m];
    }
}

