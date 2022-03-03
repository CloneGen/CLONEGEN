int main () {
    long int n, number, drop;
    cin >> n;
    long int a [100001];
    for (int i = 0;
    i < n; i++) {
        cin >> number;
        a[i] = number;
    }
    cin >> drop;
    for (int j = 0;
    j < n; j++) {
        if (a[j] == drop) {
            for (int k = j;
            k < n; k++) {
                a[k] = a[k + 1];
            }
            n = n - 1;
            j = j - 1;
        }
    }
    for (int s = 0;
    s < n; s++) {
        if (s != n - 1) {
            cout << a[s] << " ";
        }
        else {
            cout << a[s];
        }
    }
    return 0;
}

