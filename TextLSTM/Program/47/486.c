int main () {
    int i, n, *p;
    cin >> n;
    int a [n];
    p = a;
    for (i = 0; i < n; i++)
        cin >> *(p + n - 1 - i);
    for (i = 0; i < n; i++) {
        if (i != n - 1)
            cout << *(p + i) << ' ';
        else
            cout << *(p + i) << endl;
    }
}

