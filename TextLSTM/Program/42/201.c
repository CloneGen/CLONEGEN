int main () {
    int n, i, j, k, cnt = 0;
    int a [100001];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k)
            cnt++;
    }
    for (i = 0; i < n; i++) {
        if (a[i] == k && a[i + 1] != k) {
            for (j = i + 1; j < n; j++)
                a[j - 1] = a[j];
        }
        else if (a[i] == k && a[i + 1] == k) {
            int cnt2 = 0;
            for (j = i; j < n; j++) {
                if (a[j] == k)
                    cnt2++;
                else
                    break;
            }
            for (j = i + cnt2; j < n; j++)
                a[j - cnt2] = a[j];
        }
    }
    for (i = 0; i < n - cnt - 1; i++)
        cout << a[i] << " ";
    cout << a[n - cnt - 1] << endl;
    return 0;
}

