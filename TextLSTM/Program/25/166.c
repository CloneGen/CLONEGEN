int main () {
    int N, i, j, flag = 0;
    cin >> N;
    int a [100] = {0};
    a[99] = 1;
    for (j = 1; j <= N; j++) {
        for (i = 99; i >= 0; i--) {
            if (a[i] * 2 >= 10) {
                a[i] = a[i] * 2 + flag - 10;
                flag = 1;
            }
            else {
                a[i] = a[i] * 2 + flag;
                flag = 0;
            }
        }
    }
    for (i = 0; i <= 99; i++) {
        if (a[i] != 0) {
            j = i;
            break;
        }
    }
    for (i = j; i <= 99; i++) {
        cout << a[i];
    }
    return 0;
}

