int main () {
    int i, j, slen, alen;
    char *ss [2], s [256], s1 [256], s2 [256];
    int flag = 0;
    gets (s);
    gets (s1);
    gets (s2);
    slen = strlen (s);
    alen = strlen (s1);
    for (i = 0; i < slen - alen + 1; i++) {
        for (j = 0; j < alen; j++) {
            if (s[i + j] != s1[j]) {
                break;
            }
        }
        if (j == alen) {
            ss[1] = &s[i + j];
            s[i] = '\0';
            ss[0] = s;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf ("%s\n", s);
    else
        printf ("%s%s%s\n", ss[0], s2, ss[1]);
    return 0;
}

