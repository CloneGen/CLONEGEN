int main () {
    int n = 0, i = 0, x = 0, y = 0, a [100] = {1}, j = 0, jin = 0, s = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (x = 0; x < 100; x++) {
            if (j == 1)
                jin = 1;
            else
                jin = 0;
            if (a[x] < 5) {
                a[x] = a[x] * 2;
                j = 0;
            }
            else {
                a[x] = a[x] * 2 - 10;
                j = 1;
            }
            if (jin == 1)
                a[x] = a[x] + 1;
        }
    }
    for (i = 99; i >= 0; i--) {
        if (a[i] != 0) {
            s = i;
            break;
        }
    }
    for (; s >= 0; s--)
        cout << a[s];
    return 0;
}

