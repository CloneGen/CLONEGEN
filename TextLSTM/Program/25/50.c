int main () {
    int n, i, j, a [32] = {1};
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 32; j++) {
            a[j] = 2 * a[j];
        }
        for (j = 0; j < 32; j++) {
            if (a[j] > 9) {
                a[j] -= 10;
                a[j + 1]++;
            }
        }
    }
    j = 31;
    while (a[j] == 0)
        j--;
    for (; j >= 0; j--) {
        cout << a[j];
    }
    return 0;
}

