int main () {
    int n, m;
    cin >> n >> m;
    int a [102];
    int *p = a;
    for (; p < a + n; p++) {
        cin >> *p;
    }
    int temp;
    for (int i = 0;
    i < m; i++) {
        for (p = a + n - m + i; p > a + i; p--) {
            temp = *p;
            *p = *(p - 1);
            *(p - 1) = temp;
        }
        p = a;
    }
    for (; p < a + n - 1; p++) {
        cout << *p << ' ';
    }
    cout << *p << endl;
    return 0;
}

