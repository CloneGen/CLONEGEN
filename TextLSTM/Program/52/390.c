int main () {
    int n, m, shu [200] = {0};
    cin >> n >> m;
    int *p = shu;
    for (int i = 0;
    i < n; i++)
        cin >> shu[i];
    for (int i = n - 1;
    i >= 0; i--)
        *(p + i + m) = *(p + i);
    for (int i = 0;
    i < m; i++)
        *(p + i) = *(p + n + i);
    for (int i = 0;
    i < n; i++) {
        if (i == n - 1)
            cout << shu[i];
        else
            cout << shu[i] << " ";
    }
    return 0;
}

