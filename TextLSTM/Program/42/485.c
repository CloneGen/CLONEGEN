int main () {
    int a [100000];
    int n = 1, k = 1, m = 1, i = 0, j = 0, t = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m;
        a[i] = m;
    }
    cin >> k;
    for (j = 0; j < n; j++) {
        if (a[j] == k) {
            for (t = j; t < n; t++) {
                a[t] = a[t + 1];
            }
            j--;
            n--;
        }
        else
            continue;
    }
    cout << a[0];
    for (i = 1; i < n; i++) {
        cout << " " << a[i];
    }
    return 0;
}

