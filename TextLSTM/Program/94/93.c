int main () {
    int n, s = 0;
    cin >> n;
    int o [n], j [n];
    for (int i = 0;
    i < n; i++) {
        cin >> o[i];
        if (o[i] % 2 != 0) {
            j[s] = o[i];
            s = s + 1;
        }
    }
    for (int x = 0;
    x < s; x++) {
        for (int y = x;
        y < s; y++) {
            if (j[x] > j[y]) {
                swap (j[x], j[y]);
            }
        }
    }
    for (int m = 0;
    m < s; m++) {
        if (m == 0)
            cout << j[m];
        else
            cout << "," << j[m];
    }
    return 0;
}

