int main () {
    char a [100], word [50] [10] = {'\0'};
    int i, len, j, l [50], r [50], n;
    cin.getline (a, 100);
    len = strlen (a);
    j = 1;
    l[0] = 0;
    for (i = 1; i < len; i++)
        if (a[i - 1] == ' ' && a[i] != ' ') {
            l[j] = i;
            j = j + 1;
        }
    n = j - 1;
    j = 0;
    for (i = 0; i < len - 1; i++)
        if (a[i + 1] == ' ' && a[i] != ' ') {
            r[j] = i;
            j = j + 1;
        }
    r[n] = len - 1;
    for (i = 0; i <= n; i++)
        for (j = l[i]; j <= r[i]; j++)
            word[i][j - l[i]] = a[j];
    cout << word[0];
    for (i = 1; i <= n; i++)
        cout << " " << word[i];
    return 0;
}

