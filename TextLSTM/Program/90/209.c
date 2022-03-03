int count (int M, int N) {
    if (M == 1 || N == 1 || N == 0)
        return 1;
    if (M < N)
        return count (M, M);
    return (count (M, N -1) + count (M -N, N));
}

int main () {
    int t, i, a, n, m;
    cin >> t;
    cin.get ();
    for (i = 0; i < t; i++) {
        cin >> m >> n;
        a = count (m, n);
        cout << a << endl;
    }
    return 0;
}

