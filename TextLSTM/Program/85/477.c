int main () {
    int i, j, n;
    char s [MAX +1];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", s);
        for (j = 0; s[j]; j++) {
            if (!((s[j] == '_') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9' && j > 0)))
                break;
        }
        printf (s[j] ? "no\n" : "yes\n");
    }
    return 0;
}

