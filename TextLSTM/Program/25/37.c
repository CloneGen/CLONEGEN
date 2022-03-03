int main () {
    int n, length = 1, mark = 0;
    int a [110] = {0};
    a[0] = 1;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        for (int j = 0;
        j <= length; j++) {
            a[j] = a[j] + a[j];
            if (mark == 1) {
                a[j]++;
                mark = 0;
            }
            if (a[j] >= 10) {
                a[j] -= 10;
                mark = 1;
            }
        }
        if (a[length] != 0)
            length++;
    }
    for (int k = 0;
    k < length; k++)
        cout << a[length - 1 - k];
    return 0;
}

