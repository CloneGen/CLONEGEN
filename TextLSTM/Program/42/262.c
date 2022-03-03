int main () {
    int n, a [100001], k, q, count1 = 0, count2 = 0;
    cin >> n;
    for (int i = 0;
    i <= n - 1; i++)
        cin >> a[i];
    cin >> k;
    if (a[0] != k) {
        cout << a[0];
        for (int j = 1;
        j <= n - 1; j++) {
            if (a[j] == k) {
                for (int e = j;
                e <= n - 1; e++)
                    a[e] = a[e + 1];
                count1++;
                j--;
            }
        }
        for (int f = 1;
        f <= n - count1 - 1; f++)
            cout << " " << a[f];
    }
    if (a[0] == k) {
        for (int m = 1;
        m <= n - 1; m++) {
            if (a[m] != k) {
                q = m;
                break;
            }
        }
        cout << a[q];
        for (int t = q + 1;
        t <= n - 1; t++) {
            if (a[t] == k) {
                for (int h = t;
                h <= n - 1; h++)
                    a[h] = a[h + 1];
                count2++;
                t--;
            }
        }
        for (int o = q + 1;
        o <= n - count2 - 1; o++)
            cout << " " << a[o];
    }
    return 0;
}

