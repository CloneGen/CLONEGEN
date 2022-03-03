int main () {
    int i, n;
    char str [100010], *p, ans;
    int c [26] = {0};
    scanf ("%d", &n);
    while (n--) {
        memset (c, 0, sizeof (c));
        scanf ("%s", str);
        ans = '@';
        for (p = str; *p; p++)
            c[*p - 'a']++;
        for (p = str; *p; p++)
            if (c[*p - 'a'] == 1) {
                ans = *p;
                break;
            }
        if (ans == '@')
            printf ("no\n");
        else
            printf ("%c\n", ans);
    }
    return 0;
}

