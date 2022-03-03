int main () {
    int n;
    cin >> n;
    int a [100];
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
    }
    for (int j = n - 1;
    j >= 0; j--) {
        if (j != 0)
            cout << a[j] << " ";
        if (j == 0)
            cout << a[j] << endl;
    }
    return 0;
}

