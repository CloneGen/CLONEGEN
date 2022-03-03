int main () {
    int a [300], n, m, i, j, k, sum;
    do {
        sum = 0;
        cin >> n >> m;
        k = n;
        for (i = 0; i < n; i++)
            a[i] = i + 1;
        do {
            for (i = 0; i < n; i++) {
                if (a[i] == 0) {
                    if (i == n - 1)
                        break;
                    else
                        continue;
                }
                sum = sum + 1;
                if (sum % m == 0) {
                    a[i] = 0;
                    k = k - 1;
                }
                if (k == 1) {
                    for (j = 0; j < n; j++)
                        if (a[j] != 0) {
                            cout << a[j] << endl;
                            break;
                        }
                    break;
                }
                else if (i == n - 1)
                    break;
            }
        }
        while (k > 1);
    }
    while (n != 0 && m != 0);
    return 0;
}

