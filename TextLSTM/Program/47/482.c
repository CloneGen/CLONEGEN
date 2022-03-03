int main () {
    int a [105], *p = a;
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> *p++;
    }
    for (i = n - 1; i >= 1; i--) {
        cout << *(a + i) << ' ';
    }
    cout << *a << endl;
    return 0;
}

