int main () {
    int a, n, i = 1, j = 2, o = 1, p = 1, q = 1;
    cin >> n;
    while (i <= n) {
        cin >> a;
        while (j < a) {
            q = o + p;
            o = p;
            p = q;
            j = j + 1;
        }
        cout << q << endl;
        i = i + 1;
        j = 2;
        o = 1;
        p = 1;
        q = 1;
    }
    return 0;
}

