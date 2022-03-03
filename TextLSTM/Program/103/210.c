main () {
    int len, j, a = 1;
    char s [1000];
    scanf ("%s", s);
    len = strlen (s);
    for (int i = 0;
    i < len; i = i + a) {
        a = 1;
        for (j = i; j < len; j++) {
            if (s[j] == s[j + 1] || s[j] == s[j + 1] - 'a' + 'A' || s[j + 1] == s[j] - 'a' + 'A')
                a++;
            else
                break;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
        printf ("(%c,%d)", s[i], a);
    }
}

