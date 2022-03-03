int main () {
    int n, i, j, a, b, p, q;
    cin >> n;
    q = 0;
    j = 0;
    for (i = 1; i <= n; i++) {
        cin >> a >> b;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90) {
            j = j + 1;
        }
        else {
            j = 0;
        }
        if (j > q) {
            q = j;
        }
    }
    cout << q << endl;
    cin.get ();
    cin.get ();
    return 0;
}

