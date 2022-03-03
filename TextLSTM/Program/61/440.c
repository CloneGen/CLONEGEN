int WWW (int x);

int main () {
    int n;
    cin >> n;
    int a [n];
    for (int i = 0;
    i < n; i = i + 1) {
        cin >> a[i];
    }
    for (int i = 0;
    i < n; i = i + 1) {
        int b;
        b = WWW (a[i]);
        cout << b << endl;
    }
    return 0;
}

int WWW (int x) {
    int p = 1, q;
    for (int y = 0, z = 1, i = 0;
    i < x - 1; i = i + 1) {
        p = y + z;
        y = z;
        z = p;
    }
    q = p;
    return q;
}

