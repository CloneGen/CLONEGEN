int main () {
    int n, i = 1, j = 3;
    int b [20];
    b[1] = 1, b[2] = 1;
    while (j <= 20) {
        b[j] = b[j - 1] + b[j - 2];
        j = j + 1;
    }
    cin >> n;
    int a [n];
    while (i <= n) {
        cin >> a[i];
        cout << b[a[i]] << endl;
        i = i + 1;
    }
    return 0;
}

