int main () {
    int n, i, j, s, t, m, del, x, sum = 0;
    cin >> n;
    int num [100001];
    for (i = 0; i <= n - 1; i++) {
        cin >> num[i];
    }
    cin >> del;
    for (m = n; m <= 100001; m++)
        num[m] = del;
    for (x = 0; x <= n - 1; x++) {
        if (num[x] == del) {
            sum = sum + 1;
        }
    }
    for (j = n - 1; j >= 0; j--) {
        if (num[j] == del) {
            for (s = j; s <= n - 1; s++) {
                num[s] = num[s + 1];
            }
        }
    }
    cout << num[0];
    for (t = 1; t <= n - sum - 1; t++) {
        cout << " " << num[t];
    }
    return 0;
}

