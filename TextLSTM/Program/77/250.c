int main () {
    char str [10000];
    char c1, c2;
    int a [10000];
    int i, j, l;
    cin >> str;
    l = strlen (str);
    for (i = 0; i < 10000; i++) {
        a[i] = 0;
    }
    c1 = str[0];
    for (i = 0; i < l; i++)
        if (str[i] != c1) {
            c2 = str[i];
            break;
        }
    for (i = 0; i < l; i++) {
        if (str[i] == c2) {
            for (j = i - 1; j >= 0; j--) {
                if (str[j] == c1 && a[j] == 0) {
                    cout << j << " " << i << endl;
                    a[j] = 1;
                    break;
                }
            }
        }
    }
    return 0;
}

