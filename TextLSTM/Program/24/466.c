int main () {
    char a [250], b [50] [200];
    int n [100], i, j = 0, x, y = 0, k = 0, m, flag = 0;
    for (i = 0; a[i - 1] != '\n'; i++) {
        scanf ("%c", &a[i]);
    }
    a[i - 1] = '\0';
    i = 0;
    do {
        if (a[i] != ' ' && a[i] != ',' && a[i] != '\0') {
            b[j][k] = a[i];
            k++;
        }
        else {
            b[j][k] = '\0';
            k = 0;
            j++;
        }
        i++;
    }
    while (a[i - 1] != '\0');
    x = j;
    for (i = 0; i < x; i++) {
        n[i] = strlen (b[i]);
    }
    i = 0;
    for (j = 0; j < x; j++) {
        if (n[j] > y) {
            y = n[j];
            m = j;
        }
    }
    printf ("%s\n", b[m]);
    for (j = 0; j < x; j++) {
        if (n[j] < y && n[j] > 0) {
            y = n[j];
            m = j;
        }
    }
    printf ("%s\n", b[m]);
    return 0;
}

