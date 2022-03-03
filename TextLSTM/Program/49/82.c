int main () {
    int i, j, k, t;
    char a [501];
    cin >> a;
    int len = strlen (a);
    for (i = 2; i <= len; i++) {
        for (j = 0; j < len - i + 1; j++) {
            for (k = j; k <= j + i - 1; k++) {
                if (a[k] != a[2 * j + i - 1 - k])
                    break;
            }
            if (k == j + i) {
                for (t = j; t <= j + i - 1; t++)
                    cout << a[t];
                cout << endl;
            }
        }
    }
    return 0;
}

