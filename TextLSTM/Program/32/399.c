int main () {
    int a [101], b [101], n, i, j, t, lena, start;
    char cha [101], chb [101];
    cin >> n;
    cin.get ();
    for (i = 1; i <= n; i++) {
        cin.getline (cha, 100);
        cin.getline (chb, 100);
        lena = strlen (cha);
        t = lena - strlen (chb);
        for (j = 0; j < lena; j++) {
            a[j] = cha[j] - '0';
            b[j] = chb[j] - '0';
        }
        for (j = lena - 1; j >= t; j--) {
            a[j] = a[j] - b[j - t];
            if (a[j] < 0) {
                a[j] = a[j] + 10;
                a[j - 1]--;
            }
        }
        for (j = 0; j < 101; j++) {
            if (a[j]) {
                start = j;
                break;
            }
        }
        for (j = start; j < lena; j++)
            cout << a[j];
        cout << endl;
        cin.get ();
    }
    return 0;
}

