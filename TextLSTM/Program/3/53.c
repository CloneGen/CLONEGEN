int main () {
    int n, k;
    cin >> n >> k;
    int a [n];
    int i, j;
    int yes = 0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                yes = 1;
            }
        }
    }
    if (yes == 0) {
        cout << "no";
    }
    if (yes == 1) {
        cout << "yes";
    }
    return 0;
}

