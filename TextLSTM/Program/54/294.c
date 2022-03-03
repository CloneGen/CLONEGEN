int main () {
    int n, k;
    int i, j;
    int a;
    cin >> n >> k;
    if (n == 1 && k == 0)
        cout << 1 << endl;
    for (i = 1;; i++) {
        if ((n * i + k) % (n - 1) != 0)
            continue;
        else {
            for (j = n, a = i * n + k; j >= 2; j--) {
                if (a % (n - 1) != 0)
                    break;
                a = a / (n - 1) * n + k;
            }
        }
        if (j == 1)
            break;
    }
    cout << a << endl;
    return 0;
}

