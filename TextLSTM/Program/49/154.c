int huiwen (char *a) {
    int i, j, len;
    len = strlen (a);
    for (i = len / 2 - 1, j = len / 2; i >= 0 && j < len; i--, j++) {
        if (a[i] != a[j])
            break;
    }
    if (i < 0)
        return 1;
    else
        return 0;
}

int main () {
    char a [501], tmp [501];
    int i, j, k, len;
    scanf ("%s", a);
    len = strlen (a);
    if (len <= 1)
        return 0;
    for (i = 2; i <= len; i += 2) {
        for (j = 0; j + i <= len; j++) {
            for (k = 0; k < i; k++)
                tmp[k] = a[k + j];
            tmp[k] = '\0';
            if (huiwen (tmp) == 1)
                printf ("%s\n", tmp);
        }
    }
    getchar ();
    getchar ();
    return 0;
}

