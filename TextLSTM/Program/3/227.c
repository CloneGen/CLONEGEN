int main () {
    int n, k, i, num [1000], g = 0;
    cin >> n >> k;
    for (i = 0; i < n; cin >> num[i++])
        ;
    for (i = 0; i < n - 1; i++)
        for (int m = i + 1;
        m < n; m++)
            if (num[i] + num[m] == k)
                g = 1;
    cout << (g == 1 ? "yes" : "no") << endl;
    return 0;
}

