int main () {
    int i, m = 0, n;
    char a [105];
    int b [55] = {0};
    memset (a, '0', sizeof (a));
    cin >> a;
    for (i = 0; i < 100; i++)
        if (a[i] == '0') {
            n = i - 1;
            break;
        }
    for (i = 0; i < n; i++) {
        if (a[i] == a[0]) {
            b[m] = i;
            m++;
        }
        else if (a[i] != a[0]) {
            cout << b[m - 1] << " " << i << endl;
            m--;
        }
    }
    return 0;
}

