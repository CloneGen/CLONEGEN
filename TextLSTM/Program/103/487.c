main () {
    char a [1001], c = 1, i, n;
    gets (a);
    for (n = 0; a[n] != '\0'; n++) {
        if (a[n] >= 'a' && a[n] <= 'z')
            a[n] += 'A' - 'a';
        else
            a[n] = a[n];
    }
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i + 1] == a[i])
            c++;
        else {
            printf ("(%c,%d)", a[i], c);
            c = 1;
        }
    }
}

