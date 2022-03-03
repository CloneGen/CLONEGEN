int main () {
    int n;
    cin >> n;
    int a [n], m;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    for (int j = 0;
    j < n; j++) {
        if (a[j] == k) {
            for (m = j; m < n; m++) {
                a[m] = a[m + 1];
            }
            n--;
            j--;
        }
    }
    for (int v = 0;
    v < n; v++) {
        if (v == 0)
            cout << a[v];
        else
            cout << " " << a[v];
    }
    return 0;
}

