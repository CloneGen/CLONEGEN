int main () {
    char a [101], b [101], c [101], d [10001];
    cin.getline (a, 101);
    cin >> b;
    cin >> c;
    int la = strlen (a);
    int lb = strlen (b);
    int lc = strlen (c);
    int i, j = 0, k, num;
    for (i = 0; i < la; i++) {
        for (k = 0, num = 0; k < lb; k++) {
            if (a[i] == b[k])
                num++;
            i++;
        }
        if (((num == lb) && (a[i - k - 1] == ' ')) || ((num == lb) && (i == k))) {
            i = i - 1;
            for (k = 0; k < lc; k++) {
                d[j] = c[k];
                j++;
            }
        }
        else {
            i = i - k;
            d[j] = a[i];
            j++;
        }
        d[j] = '\0';
    }
    cout << d << endl;
    return 0;
}

