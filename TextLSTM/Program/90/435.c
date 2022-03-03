int apple (int M, int N) {
    if ((M < 1) || (N < 1))
        return 0;
    if (M == 1 || N == 1)
        return 1;
    if (M < N)
        return apple (M, M);
    if (M == N)
        return apple (M, N -1) + 1;
    return apple (M, N -1) + apple (M -N, N);
}

int main () {
    int t, M, N, i;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> M >> N;
        cout << apple (M, N) << endl;
    }
    return 0;
}

