int main () {
    int a, n, i, k;
    cin >> a;
    for (n = 3; n <= a / 2; n += 2) {
        for (i = 2; i <= n - 1; i++) {
            if (n % i == 0)
                break;
            else if (i == n - 1) {
                for (k = 2; k <= a - n - 1; k++) {
                    if ((a - n) % k == 0)
                        break;
                    else if (k == a - n - 1)
                        cout << n << " " << a - n << endl;
                }
            }
        }
    }
    return 0;
}

