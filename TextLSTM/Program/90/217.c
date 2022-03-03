int N, M;

int method (int N, int M) {
    if (N == 1 || (N == 0 && M == 0))
        return 1;
    if (N > M)
        return method (N -1, M);
    return method (N -1, M) + method (N, M -N);
}

int main () {
    int t, i, K;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> M >> N;
        K = method (N, M);
        cout << K << endl;
    }
    return 0;
}

