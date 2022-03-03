int main () {
    int n, k, i, j, s, t = 0, a [1000];
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 1; j < n; j++) {
            s = a[i] + a[j];
            if (s == k)
                t = t + 1;
        }
    }
    if (t == 0)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
    return 0;
}

