int main () {
    int n, k, apple [10000];
    cin >> n >> k;
    apple[1] = k;
    int i = 0;
    do {
        apple[1] = apple[1] + n;
        for (i = 1; i < n; i++) {
            apple[i + 1] = apple[i] * n / (n - 1) + k;
        }
        for (i = 1; i < n; i++) {
            if ((apple[n] - k) % n != 0)
                break;
            if (apple[i] % (n - 1) != 0)
                break;
        }
    }
    while (i < n - 1);
    cout << apple[n] << endl;
    return 0;
}

