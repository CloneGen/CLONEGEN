int main () {
    int n, i, j, totallenth = 0, record = 0;
    int *p;
    cin >> n;
    p = &n;
    int lenth [*p];
    char str [*p] [41];
    for (i = 0; i < n; i++) {
        cin >> str[i];
        lenth[i] = strlen (str[i]);
    }
    for (i = 0; i < n; i++) {
        totallenth += lenth[i] + 1;
        if (totallenth > 81) {
            for (j = record; j <= i - 1; j++) {
                cout << str[j];
                if (j != i - 1)
                    cout << ' ';
                else {
                    cout << endl;
                }
            }
            totallenth = lenth[i] + 1;
            record = i;
        }
        if (i == n - 1 && record != i) {
            for (j = record; j <= i; j++) {
                cout << str[j];
                if (j != i)
                    cout << ' ';
                else
                    cout << endl;
            }
        }
    }
    return 0;
}

