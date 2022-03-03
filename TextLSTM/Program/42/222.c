int main () {
    int n, a [100001], x, k, sum;
    int i, j;
    cin >> n;
    sum = 0;
    for (i = 1; i <= n; i++) {
        cin >> x;
        a[i] = x;
    }
    cin >> k;
    for (i = 1; i <= n - sum; i++) {
        if (a[i] == k) {
            for (j = i + 1; j <= n - sum; j++)
                a[j - 1] = a[j];
            sum = sum + 1;
            i--;
        }
    }
    for (i = 1; i <= n - sum; i++) {
        if (i < n - sum)
            cout << a[i] << " ";
        else
            cout << a[i] << endl;
    }
    return 0;
}

