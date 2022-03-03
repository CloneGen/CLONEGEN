int Calc (int M, int N) {
    int sum = 0;
    if (M == 0) {
        sum = 1;
        return sum;
    }
    if (N == 1) {
        sum = 1;
        return sum;
    }
    if (M < N)
        sum = Calc (M, N -1);
    else
        sum = Calc (M -N, N) + Calc (M, N -1);
    return sum;
}

int main () {
    int t, i, M, N;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> M >> N;
        cout << Calc (M, N) << endl;
    }
    return 0;
}

