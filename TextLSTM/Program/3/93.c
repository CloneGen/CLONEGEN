int main () {
    int k, n, i, j, a [1000], b [1000] = {0}, sum = 0;
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                b[i] = 1;
                break;
            }
        }
    }
    for (i = 0; i < n; i++) {
        sum = sum + b[i];
    }
    if (sum == 0)
        cout << "no";
    else
        cout << "yes";
    cin.get ();
    return 0;
}

