int main () {
    int i, j, ii, t, flag;
    int a [2000];
    while (1) {
        t = 0;
        flag = 1;
        i = 1;
        while (flag == 1) {
            cin >> a[i++];
            if (a[i - 1] == 0) {
                flag = 0;
            }
            else if (a[i - 1] == -1)
                return 0;
        }
        i -= 1;
        for (j = 1; j < i; j++) {
            if (a[j] % 2 == 0) {
                for (ii = 1; ii < i; ii++) {
                    if (a[ii] * 2 == a[j])
                        t++;
                }
            }
        }
        cout << t << endl;
        i = 0;
    }
    return 0;
}

