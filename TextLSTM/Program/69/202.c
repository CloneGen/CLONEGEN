int main () {
    char a [250], b [250];
    cin >> a >> b;
    int ia = strlen (a), ib = strlen (b);
    int i, k = 0, j, sum, s [250] = {0}, com;
    if (ia == ib) {
        com = ia;
        for (i = com - 1; i >= 0; i--) {
            sum = a[i] + b[i] + k - 96;
            k = sum / 10;
            j = sum - k * 10;
            s[i + 1] = j;
        }
        if (k != 0)
            s[0] = k;
    }
    else {
        int max;
        if (ia > ib)
            max = ia;
        else
            max = ib;
        com = max;
        for (; ia != 0 && ib != 0; ia--, ib--, max--) {
            sum = a[ia - 1] + b[ib - 1] + k - 96;
            k = sum / 10;
            j = sum - k * 10;
            s[max] = j;
        }
        a[-1] = '0';
        b[-1] = '0';
        if (ia > ib) {
            for (; max >= 0; max--) {
                sum = a[ia - 1] + k - 48;
                k = sum / 10;
                j = sum - k * 10;
                s[max] = j;
                ia--;
            }
        }
        else {
            for (; max >= 0; max--) {
                sum = b[ib - 1] + k - 48;
                k = sum / 10;
                j = sum - k * 10;
                s[max] = j;
                ib--;
            }
        }
        if (k != 0)
            s[0] = k;
    }
    if (a[0] == '0' && b[0] == '0' && ia == 1 && ib == 1)
        cout << "0" << endl;
    else {
        int t;
        for (t = 0; s[t] == 0; t++)
            ;
        for (i = t; i <= com; i++)
            cout << s[i];
        cout << endl;
    }
}

