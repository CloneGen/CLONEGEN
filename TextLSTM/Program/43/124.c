int main () {
    int n, m, i, j;
    double k;
    cin >> n;
    for (i = 3; i <= n / 2; i = i + 2) {
        int r = 0;
        k = sqrt (i);
        for (j = 2; j <= k; j++) {
            if (i % j == 0)
                r++;
        }
        if (r)
            continue;
        else {
            r = 0;
            k = sqrt (n - i);
            for (j = 2; j <= sqrt (n - i); j++) {
                if ((n - i) % j == 0)
                    r++;
            }
        }
        if (r)
            continue;
        else {
            cout << i << " " << n - i << endl;
        }
    }
    return 0;
}

