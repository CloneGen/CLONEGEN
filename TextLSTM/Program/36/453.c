int main () {
    int count [100];
    int countie [100];
    int i = 0;
    for (i = 0; i < 100; i++) {
        count[i] = 0;
        countie[i] = 0;
    }
    int k = 0;
    char a [50], b [50];
    scanf ("%s %s", a, b);
    for (i = 0; i < strlen (a); i++)
        count[a[i] - 'A']++;
    for (i = 0; i < strlen (b); i++)
        countie[b[i] - 'A']++;
    for (i = 0; i < 100; i++)
        if (count[i] == countie[i])
            k++;
    if (k == 100)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}

