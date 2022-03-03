int main () {
    int n, a [50] = {0}, l, j;
    a[1] = l = 1;
    for (cin >> n; n; n--) {
        for (j = 1; j <= l; j++)
            a[j] = a[j] * 2;
        for (j = 1; j <= l; j++) {
            a[j + 1] += a[j] / 10;
            if (a[l + 1])
                l++;
            a[j] %= 10;
        }
    }
    for (; l; l--)
        cout << a[l];
    return 0;
}

