int main () {
    int n, i, j = 1, p, num, k;
    int a [500] = {0};
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> num;
        if (num % 2 != 0)
            a[j++] = num;
    }
    j = j - 1;
    for (k = 1; k <= j - 1; k++) {
        for (i = 1; i <= j - k; i++) {
            if (a[i] > a[i + 1]) {
                p = a[i];
                a[i] = a[i + 1];
                a[i + 1] = p;
            }
        }
    }
    for (i = 1; i <= j; i++) {
        if (i != j)
            cout << a[i] << ",";
        else
            cout << a[i];
    }
    return 0;
}

