int main () {
    int n, a, i, j, k = 1, num [20000];
    cin >> n;
    cin >> a;
    num[0] = a;
    for (i = 1; i < n; i++) {
        cin >> a;
        for (j = 0; j < k; j++) {
            if (a == num[j])
                break;
        }
        if (j == k) {
            num[k] = a;
            k = k + 1;
        }
    }
    for (i = 0; i <= k - 2; i++)
        cout << num[i] << " ";
    cout << num[k - 1];
    return 0;
}

