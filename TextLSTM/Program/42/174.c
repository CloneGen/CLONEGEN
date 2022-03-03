int main () {
    int n, i = 0, j = 0, k, m = 0, p = 0, l, cnt = 0;
    cin >> n;
    int b [100000];
    for (; i < n; i++)
        cin >> b[i];
    cin >> k;
    for (; j < n; j++)
        if (b[j] == k)
            cnt++;
    for (l = 0; l < n - cnt; l++)
        for (m = p; m < n; m++)
            if (b[m] != k) {
                b[l] = b[m];
                p = m + 1;
                break;
            }
    for (l = 0; l < n - cnt; l++) {
        cout << b[l];
        if (l < n - cnt - 1)
            cout << " ";
    }
    return 0;
}

