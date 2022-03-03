int apple (int M, int N);

int main () {
    int M, N, i, t, ways;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> M >> N;
        ways = apple (M, N);
        cout << ways << endl;
    }
    return 0;
}

int apple (int M, int N) {
    if (N == 1)
        return 1;
    else if (M < 0)
        return 0;
    else
        return (apple (M, N -1) + apple (M -N, N));
}

