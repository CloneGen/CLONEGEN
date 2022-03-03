int cal (int, int);

int main () {
    int n = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        int m = 0;
        cin >> m;
        cout << cal (m, 2) << endl;
    }
    return 0;
}

int cal (int m, int i) {
    int count = 0;
    if (m == 1)
        return 1;
    for (i;
    i <= m; i++) {
        if (m % i == 0) {
            count += cal (m / i, i);
        }
    }
    return count;
}

