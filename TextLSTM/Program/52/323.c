int main () {
    int m, n, i;
    int numbers [105];
    cin >> n >> m;
    for (i = m; i < n; i++)
        cin >> numbers[i];
    for (i = 0; i < m; i++)
        cin >> numbers[i];
    for (i = 0; i < n; i++) {
        if (i != (n - 1))
            cout << numbers[i] << " ";
        else
            cout << numbers[i];
    }
    return 0;
}

