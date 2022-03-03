char str [1000] [50] = {0};

int main () {
    int label [1000] = {0};
    int i, j, n;
    int l = -1;
    int k = 0;
    char str [1000] [50] = {0};
    char (*p) [50] = str;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> str[i];
    p++;
    while (k <= n) {
        while (l <= 80) {
            k++;
            l += 1 + strlen (str[k]);
        }
        k = k - 1, l = -1;
        label[k] = 1;
    }
    for (i = 1; i <= n - 1; i++) {
        if (label[i] != 1)
            cout << *(p++) << " ";
        else
            cout << *(p++) << endl;
    }
    cout << str[i] << endl;
    return 0;
}

