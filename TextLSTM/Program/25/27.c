int main () {
    int N, i, j, a [32] = {1}, b [32];
    cin >> N;
    for (i = 1; i <= N; i++) {
        for (j = 0; j < 32; j++) {
            b[j] = a[j] * 2;
        }
        a[0] = b[0] % 10;
        for (j = 1; j < 32; j++) {
            a[j] = b[j] % 10 + b[j - 1] / 10;
        }
    }
    j = 31;
    while (a[j] == 0) {
        j--;
    }
    for (i = j; i >= 0; i--) {
        cout << a[i];
    }
    return 0;
}

