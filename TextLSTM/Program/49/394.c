int main () {
    char a [500];
    int len [5000], x [5000], y [5000];
    int i, j, k, l, m, n, flag, count = 0;
    cin >> a;
    l = strlen (a);
    for (i = 0; i < l; i++) {
        for (j = l - 1; j > i; j--) {
            m = i;
            n = j;
            if (a[m] == a[n]) {
                flag = 1;
                while (n >= m) {
                    if (a[n--] != a[m++]) {
                        flag = 0;
                        break;
                    }
                }
                if (flag) {
                    len[count] = j - i + 1;
                    x[count] = i;
                    y[count] = j;
                    count++;
                }
            }
        }
    }
    for (j = 2; j <= l; j++) {
        for (i = 0; i < count; i++) {
            if (len[i] == j) {
                for (k = x[i]; k <= y[i]; k++)
                    cout << a[k];
                cout << endl;
            }
        }
    }
    return 0;
}

