int main () {
    char s [21];
    int i, n, j;
    char jg [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", &s);
        for (j = 0; s[j] != '\0'; j++) {
            if ((s[j] == '_') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9' && j > 0)) {
                continue;
            }
            else {
                break;
            }
        }
        jg[i] = s[j];
    }
    for (i = 0; i < n; i++) {
        if (jg[i] == '\0') {
            printf ("yes\n");
        }
        else {
            printf ("no\n");
        }
    }
    return 0;
}

