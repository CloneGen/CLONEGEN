int cap (char s [], char w [], int i) {
    int j;
    for (j = 0; j <= strlen (s); j++) {
        if (s[j] != w[j + i])
            break;
    }
    if (j == strlen (s) || j == strlen (s) + 1) {
        return 1;
    }
    else
        return 0;
}

void main () {
    char s [51], w [51];
    scanf ("%s%s", s, w);
    int i, l = strlen (w), ls = strlen (s);
    for (i = 0; i <= l - ls; i++) {
        if (cap (s, w, i) == 1) {
            printf ("%d", i);
            break;
        }
    }
    if (i > l - ls)
        printf ("error");
}

