int main () {
    char str [1000];
    int i, j, ii, jj, len, q;
    cin >> str;
    len = strlen (str);
    for (q = 2; q <= len; q++) {
        for (i = 0; str[i] != 0; i++) {
            ii = i;
            while ((str[ii] == str[i + q + i - 1 - ii]) && (ii < i + q / 2)) {
                ii++;
            }
            if (ii == i + q / 2) {
                for (j = i; j <= i + q - 1; j++)
                    cout << str[j];
                cout << endl;
            }
        }
    }
    return 0;
}

