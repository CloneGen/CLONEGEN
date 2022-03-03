int main () {
    int n, i, j, k, len, temp, l;
    char result [1000];
    int t [1000];
    memset (result, 0, 1000);
    memset (t, 0, sizeof (t));
    cin >> n;
    result[0] = '2';
    for (i = 1; i < n; i++) {
        len = strlen (result);
        k = 0;
        memset (t, 0, sizeof (t));
        for (j = len - 1; j >= 0; j--) {
            temp = result[j] - '0';
            t[k] += temp * 2;
            if (t[k] >= 10) {
                t[k + 1] += 1;
                t[k] = t[k] - 10;
            }
            k++;
        }
        if (t[k] == 0)
            k = k - 1;
        memset (result, 0, 1000);
        for (l = 0; l <= k; l++) {
            result[k - l] = '0' + t[l];
        }
    }
    if (n == 1)
        cout << 2 << endl;
    else if (n == 0)
        cout << 1 << endl;
    else
        cout << result << endl;
    return 0;
}

