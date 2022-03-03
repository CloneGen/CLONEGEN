int main () {
    int n, i, j, x [20000];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++) {
            if (x[i] == x[j] && i != j) {
                x[j] = 0;
            }
        }
    cout << x[0];
    for (i = 1; i < n; i++) {
        if (x[i] != 0) {
            cout << " " << x[i];
        }
    }
    cout << endl;
    return 0;
}

