main () {
    int n, i, j, m = 0, k = 0, high1 = 0, high2 = 0, low1, low2, win = 0, lose = 0, s [1000], t [1000], p [100], temp;
    scanf ("%d", &n);
    while (n != 0) {
        low1 = low2 = n - 1;
        high1 = high2 = 0;
        win = 0;
        lose = 0;
        for (i = 0; i < n; i++)
            scanf ("%d", &s[i]);
        for (i = 0; i < n; i++)
            scanf ("%d", &t[i]);
        for (i = 0; i < n; i++)
            for (j = 0; j < n - 1; j++)
                if (s[j + 1] > s[j]) {
                    temp = s[j + 1];
                    s[j + 1] = s[j];
                    s[j] = temp;
                }
        for (i = 0; i < n; i++)
            for (j = 0; j < n - 1; j++)
                if (t[j + 1] > t[j]) {
                    temp = t[j + 1];
                    t[j + 1] = t[j];
                    t[j] = temp;
                }
        for (i = 0; i < n; i++) {
            if (t[high1] >= s[high2]) {
                if (t[low1] >= s[low2]) {
                    if (t[high1] > s[low2])
                        lose++;
                    else if (t[high1] == s[low2])
                        ;
                    else if (t[high1] < s[low2])
                        win++;
                    low2--;
                    high1++;
                }
                else if (t[low1] < s[low2]) {
                    low2--;
                    low1--;
                    win++;
                }
            }
            else if (t[high1] < s[high2]) {
                high1++;
                high2++;
                win++;
            }
        }
        p[m++] = 200 * (win - lose);
        scanf ("%d", &n);
    }
    for (i = 0; i < m; i++) {
        printf ("%d\n", p[i]);
    }
    return 0;
}

