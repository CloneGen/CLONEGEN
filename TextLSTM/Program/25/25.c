int main () {
    int n, flag = 0, tag = 0;
    int a [100] = {1};
    cin >> n;
    for (; n > 0; n--)
        for (int i = 0;
        i < 100; i++) {
            a[i] *= 2;
            if (flag)
                a[i]++;
            flag = 0;
            if (a[i] > 9) {
                flag = 1;
                a[i] -= 10;
            }
        }
    for (int i = 99;
    i >= 0; i--) {
        if (a[i] != 0 || tag) {
            tag = 1;
            cout << a[i];
        }
    }
    return 0;
}

