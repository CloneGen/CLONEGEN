int main () {
    int n, i, j, k, count = 0;
    int num [100000] = {0};
    cin >> n;
    for (i = 0; i <= n - 1; i++)
        cin >> num[i];
    cin >> k;
    for (i = 0; i <= n - 1; i++) {
        if (num[i] == k) {
            for (j = i; j < n - 1; j++)
                num[j] = num[j + 1];
            i--;
            n--;
        }
    }
    for (i = 0; i <= n - 1; i++, count++) {
        if (count != 0)
            cout << " ";
        cout << num[i];
    }
    return 0;
}

