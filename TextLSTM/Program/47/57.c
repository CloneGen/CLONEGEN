int main () {
    int n, i, a [100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    int *p = &a[n - 1];
    do {
        cout << *p << " ";
        p--;
    }
    while (p > a);
    cout << *a;
    return 0;
}

