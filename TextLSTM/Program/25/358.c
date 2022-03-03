int main () {
    int i, j, n, num [40], *p = NULL;
    memset (num, 0, 160);
    num[0] = 1;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 40; j++)
            num[j] *= 2;
        for (j = 0; j < 40; j++) {
            if (num[j] > 9) {
                num[j + 1]++;
                num[j] -= 10;
            }
        }
    }
    p = num + 38;
    while (*(--p) == 0)
        ;
    while (p >= num) {
        cout << *p;
        p--;
    }
    cout << endl;
    return 0;
}

