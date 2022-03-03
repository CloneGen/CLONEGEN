int main () {
    int n, num, k;
    int a [100010];
    int i = 0, j, l, m, time = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num;
        a[i] = num;
    }
    cin >> k;
    for (j = 0; j < n; j++) {
        if (a[j] == k) {
            for (m = j; m < n; m++) {
                a[m] = a[m + 1];
            }
            j = j - 1;
            time = time + 1;
        }
    }
    for (l = 0; l < n - time; l++) {
        if (l == 0)
            cout << a[l];
        else
            cout << " " << a[l];
    }
    return 0;
}

