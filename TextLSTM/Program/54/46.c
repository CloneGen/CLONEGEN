int main () {
    int n, k, i, j;
    cin >> n >> k;
    for (i = 1;; i++) {
        int sum = i * (n - 1);
        int counter = 0;
        for (j = 1; j <= n; j++) {
            if ((sum % (n - 1)) != 0)
                break;
            else {
                sum = sum * n / (n - 1) + k;
                counter++;
            }
        }
        if (counter == n) {
            cout << sum << endl;
            break;
        }
    }
    return 0;
}

