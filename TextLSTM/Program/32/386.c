int main () {
    char aa [100], bb [100];
    int a [100], b [100], c [100];
    int n, la, lb;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> aa >> bb;
        la = strlen (aa);
        lb = strlen (bb);
        for (int j = 0;
        j < la; j++) {
            a[j] = aa[j] - 48;
            b[j] = bb[j] - 48;
        }
        for (int j = 1;
        j <= lb; j++)
            c[la - j] = a[la - j] - b[lb - j];
        for (int j = 0;
        j < la - lb; j++)
            c[j] = a[j];
        for (int j = la - 1;
        j > 0; j--)
            if (c[j] < 0) {
                c[j] += 10;
                c[j - 1] -= 1;
            }
        int k;
        for (int j = 0;
        j < la; j++)
            if (c[j] != 0) {
                k = j;
                break;
            }
        for (int j = k;
        j < la; j++)
            cout << c[j];
        cout << endl;
    }
    return 0;
}

