int main () {
    int n;
    cin >> n;
    int a [n], i, j;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        for (j = 0; j < i; j++) {
            if (a[j] == a[i])
                break;
        }
        if (j == i) {
            if (i != 0)
                cout << ' ';
            cout << a[i];
        }
    }
    return 0;
}

