int main () {
    int max = 80;
    int i, n, len;
    int end = 0;
    char word [80];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", word);
        len = strlen (word);
        if (end + len + 1 > 80) {
            printf ("\n");
            end = 0;
        }
        else {
            if (i > 0) {
                printf (" ");
                end++;
            }
        }
        printf ("%s", word);
        end += len;
    }
    return 0;
}

