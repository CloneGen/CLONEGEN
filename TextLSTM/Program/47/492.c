int main () {
    int a [110] = {0};
    int *p = NULL;
    int n = 0, i = 0;
    ;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    p = &a[n - 1];
    for (i = n - 1; i >= 1; i--) {
        cout << *p << " ";
        p--;
    }
    cout << *p << endl;
    return 0;
}

