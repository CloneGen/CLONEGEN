int main () {
    int N, k, i, j = 0, a [100] = {1}, b [100];
    cin >> N;
    for (k = 1; k <= N; ++k) {
        for (i = 0; i <= j; ++i)
            b[i] = a[i];
        for (i = 0; i <= j; ++i) {
            a[i] += b[i];
            if (a[i] >= 10) {
                a[i] -= 10;
                ++a[i + 1];
                if (a[i + 1] == 1 && i == j) {
                    ++j;
                    break;
                }
            }
        }
    }
    i = 99;
    while (a[--i] == 0)
        ;
    for (; i >= 0; --i)
        cout << a[i];
    return 0;
}

