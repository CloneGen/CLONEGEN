int main () {
    int n, m, i, j, k;
    cin >> n;
    int N [n];
    for (i = 0, k = 0; i < n; i++, k++) {
        cin >> N[k];
        for (j = 0; j < k; j++) {
            if (N[j] == N[k])
                k--;
        }
    }
    for (i = 0; i < k; i++) {
        if (i == (k - 1))
            cout << N[i];
        else
            cout << N[i] << " ";
    }
    return 0;
}

