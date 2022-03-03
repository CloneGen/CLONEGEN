int main () {
    int n, i = 0, a [100];
    cin >> n;
    while (i < n) {
        cin >> a[i];
        i++;
    }
    for (; i > 1; i--) {
        cout << a[i - 1] << " ";
    }
    cout << a[0] << endl;
    return 0;
}

