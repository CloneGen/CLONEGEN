int main () {
    char a [500];
    int l, i, j, m = 0, h, e, k, flag = 0;
    cin.getline (a, 500);
    l = strlen (a);
    for (i = 2; i <= l; i++) {
        for (j = 0; j + i <= l; j++) {
            flag = 0;
            h = j;
            e = j + i - 1;
            while (a[h] == a[e]) {
                if (flag == 0) {
                    m = h;
                    flag = 1;
                }
                h++;
                e--;
                if (h >= e)
                    break;
            }
            if (h >= e) {
                for (k = m; k <= m + i - 1; k++) {
                    cout << a[k];
                }
                cout << endl;
            }
        }
    }
    return 0;
}

