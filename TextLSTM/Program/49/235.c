void shuchu (char b [], int m) {
    int i, j, k, l, flag;
    for (j = 2; j <= m; j++) {
        for (i = 1; i <= m - 1; i++) {
            flag = 1;
            for (k = 0; k < j; k++) {
                if (b[i + k] != b[i + j - k - 1])
                    flag = 0;
            }
            if (flag) {
                for (l = 0; l < j; l++) {
                    if (l == j - 1)
                        cout << b[i + l] << endl;
                    else
                        cout << b[i + l];
                }
            }
        }
    }
}

int main () {
    int m;
    char a [501];
    for (m = 1; m > 0; m++) {
        if (a[m - 1] == '\n')
            break;
        a[m] = cin.get ();
    }
    shuchu (a, m);
    return 0;
}

