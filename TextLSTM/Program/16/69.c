int main () {
    int k, i;
    char a [6];
    for (i = 1; i <= 5; i++) {
        a[i] = getchar ();
        if (a[i] == '\n')
            break;
    }
    i = i - 1;
    for (k = i; k >= 1; k--)
        printf ("%c", a[k]);
    return 0;
}

