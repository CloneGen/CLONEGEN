int main () {
    int n, k, i;
    cin >> n >> k;
    const  int N = n;
    int apple [N +1];
    apple[1] = k;
    do {
        apple[1] = apple[1] + n;
        for (i = 1; i <= N; i++) {
            if (apple[i] % (n - 1) != 0)
                break;
            apple[i + 1] = apple[i] / (n - 1) * n + k;
        }
    }
    while (i < N);
    cout << apple[N];
    return 0;
}

