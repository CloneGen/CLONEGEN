int main () {
    int n, m, s [100000], shan, i, j;
    cin >> n;
    m = n;
    for (i = 0; i < n; i++) {
        cin >> s[i];
    }
    cin >> shan;
    for (i = 0; i < n; i++) {
        if (shan == s[i]) {
            for (j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            n--;
            i--;
        }
    }
    for (i = 0; i < n - 1; i++) {
        cout << s[i] << " ";
    }
    cout << s[n - 1];
    return 0;
}

