int main () {
    int n, k;
    int apple [1000];
    int j = 0;
    int m = 0;
    cin >> n >> k;
    for (int i = 0;
    i < 1000; i++) {
        apple[i] = k;
    }
    do {
        apple[n] = apple[n] + n;
        for (j = n - 1; j >= 1; j--) {
            if (apple[j + 1] % (n - 1) != 0)
                break;
            else
                apple[j] = apple[j + 1] * n / (n - 1) + k;
        }
    }
    while (j >= 1);
    for (int k = 0;
    k < n; k++) {
        if (apple[k] > m)
            m = apple[k];
    }
    cout << m << endl;
    return 0;
}

