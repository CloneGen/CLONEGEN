int main () {
    char a [101], b [101];
    int c, d, n, i, j, k;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a >> b;
        c = strlen (a);
        d = strlen (b);
        int numa [100] = {0};
        int numb [100] = {0};
        k = 0;
        for (j = c - 1; j >= 0; j--) {
            numa[k++] = a[j] - '0';
        }
        k = 0;
        for (j = d - 1; j >= 0; j--) {
            numb[k++] = b[j] - '0';
        }
        for (j = 0; j <= d; j++) {
            numa[j] -= numb[j];
            if (numa[j] < 0) {
                numa[j] += 10;
                numa[j + 1]--;
            }
        }
        j = c;
        while (numa[j] == 0)
            j--;
        for (; j >= 0; j--)
            cout << numa[j];
        cout << endl;
    }
    return 0;
}

