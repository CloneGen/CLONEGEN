int main () {
    int i, j, k, l, m, n, p [20] = {0}, q, h [10] = {0};
    char str [200], str1 [100], str2 [100];
    gets (str);
    gets (str1);
    gets (str2);
    m = strlen (str1);
    q = strlen (str2);
    n = strlen (str);
    k = 0;
    l = 0;
    for (i = 0; i < n; i++) {
        if (str[i] == str1[l]) {
            l++;
            if ((i + 1) < (n - 1)) {
                if (l == m && str[i + 1] == ' ') {
                    h[k] = i - m + 1;
                    k++;
                    l = 0;
                }
            }
            else {
                if (l == m) {
                    h[k] = i - m + 1;
                    k++;
                    l = 0;
                }
            }
        }
        else {
            l = 0;
        }
    }
    j = 0;
    i = 0;
    do {
        if (h[j] > 0) {
            if (i == h[j] && k > 0 && str[h[j] - 1] == ' ') {
                printf ("%s", str2);
                i = i + m;
                j++;
            }
            else {
                if (h[j - 1] < n - 1 - m) {
                    printf ("%c", str[i]);
                    i++;
                }
            }
        }
        if (h[j] == 0) {
            if (i == h[j] && k > 0) {
                printf ("%s", str2);
                i = i + m;
                j++;
            }
            else {
                if (h[j - 1] < n - 1 - m) {
                    printf ("%c", str[i]);
                    i++;
                }
            }
        }
    }
    while (i < n);
    return 0;
}

