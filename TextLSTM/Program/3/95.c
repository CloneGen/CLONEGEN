int main () {
    int n, k;
    int a [1000];
    cin >> n >> k;
    int i, j;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        for (j = 0; j < i; j++)
            if (a[i] + a[j] == k) {
                cout << "yes";
                return 0;
            }
    }
    cout << "no";
    return 0;
}

