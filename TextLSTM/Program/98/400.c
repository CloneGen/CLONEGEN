int main (int argc, char *argv []) {
    char a [1000] [41];
    int p = 0, i = 0, n;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%s", a[i]);
    for (i = 0; i < n; i++) {
        if (p == 0) {
            printf ("%s", a[i]);
            p = p + strlen (a[i]);
        }
        else if (p + 1 + strlen (a[i]) <= 80) {
            printf (" %s", a[i]);
            p = p + strlen (a[i]) + 1;
        }
        else {
            p = 0;
            i--;
            printf ("\n");
        }
    }
}

