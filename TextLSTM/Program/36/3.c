int main () {
    int k, i, j;
    char a [20], b [20];
    scanf ("%s", a);
    scanf ("%s", b);
    k = 0;
    for (i = 0; i < strlen (a); i++) {
        for (j = 0; j < 20; j++) {
            if (a[i] == b[j]) {
                k = k + 1;
                b[j] = '0';
                break;
            }
        }
    }
    if (strlen (a) != strlen (b))
        printf ("NO");
    else {
        if (k == strlen (a))
            printf ("YES");
        else
            printf ("NO");
    }
    return 0;
}

