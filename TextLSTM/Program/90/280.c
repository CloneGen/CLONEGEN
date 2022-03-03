int K (int a, int b);

int main () {
    int t, i, M, N;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> M >> N;
        cout << K (M, N) << endl;
    }
    return 0;
}

int K (int a, int b) {
    if (b == 1 || a == 1 || a == 0) {
        return 1;
    }
    if (a < 0) {
        return 0;
    }
    else {
        return (K (a, b - 1) + K (a - b, b));
    }
}

