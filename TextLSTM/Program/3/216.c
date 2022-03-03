int main () {
    int n, k;
    int a [2001];
    cin >> n >> k;
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
    }
    int p = 0;
    for (int i = 0;
    i < n; i++)
        for (int j = i + 1;
        j < n; j++)
            if (a[i] + a[j] == k)
                p = 1;
    if (p == 0)
        cout << "no";
    else
        cout << "yes";
    return 0;
}

