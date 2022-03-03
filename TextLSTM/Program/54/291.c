int f (int n, int k);

int main () {
    int n, k;
    cin >> n >> k;
    cout << f (n, k);
    return 0;
}

int f (int n, int k) {
    int q [n + 1], i;
    q[n] = k;
    do {
        q[n] = q[n] + n;
        for (i = n - 1; i >= 1; i--) {
            if (q[i + 1] % (n - 1) != 0)
                break;
            else
                q[i] = q[i + 1] * n / (n - 1) + k;
        }
    }
    while (i >= 1);
    return q[1];
}

