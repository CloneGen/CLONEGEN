int main () {
    int i, j = 0, k = 0, n, m = 0, a [1001], b [1001], l1, l2, c [1001], p;
    char str1 [9999], str2 [9999], ch1 [1001] [100], ch2 [1001] [100];
    cin.getline (str1, 9999, '\n');
    cin.getline (str2, 9999, '\n');
    l1 = strlen (str1);
    l2 = strlen (str2);
    for (i = 0; i <= l1 - 1; i++) {
        if (str1[i] != ',') {
            ch1[k][j] = str1[i];
            j++;
        }
        else {
            k++;
            j = 0;
        }
    }
    for (i = 0; i <= k; i++) {
        a[i] = atof (ch1[i]);
    }
    k = 0;
    j = 0;
    for (i = 0; i <= l2 - 1; i++) {
        if (str2[i] != ',') {
            ch2[k][j] = str2[i];
            j++;
        }
        else {
            k++;
            j = 0;
        }
    }
    for (i = 0; i <= k; i++) {
        b[i] = atof (ch2[i]);
    }
    n = k + 1;
    for (j = 0; j < 1000; j++) {
        c[j] = 0;
        for (i = 0; i <= k; i++) {
            if (a[i] <= j && b[i] > j) {
                c[j]++;
            }
        }
        if (c[j] > m) {
            m = c[j];
        }
    }
    cout << n << " " << m;
    return 0;
}

