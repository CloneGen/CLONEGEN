int main () {
    int n, i, j, b, k;
    cin >> n >> k;
    b = n + k;
    while (i < n - 1) {
        j = b;
        for (i = 0; i < n; i++) {
            if ((n * j) % (n - 1) != 0)
                break;
            else
                j = n * j / (n - 1) + k;
        }
        if (i == n - 1) {
            cout << j << endl;
            break;
        }
        b = b + n;
    }
    return 0;
}

