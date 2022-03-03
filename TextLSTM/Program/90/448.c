int put (int M, int N) {
    if (N == 1)
        return 1;
    if (M < N)
        return put (M, N -1);
    if (M >= N)
        return put (M, N -1) + put (M -N, N);
}

int main () {
    int t, M, N, i;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> M >> N;
        cout << put (M, N) << endl;
    }
    return 0;
}

