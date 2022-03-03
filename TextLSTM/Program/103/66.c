int main () {
    char a [1000];
    gets (a);
    int i = 0;
    int l, m;
    l = strlen (a);
    while (i < l) {
        int k = 1;
        m = i + 1;
        while ((a[i] == a[m] || a[i] == a[m] - 'a' + 'A' || a[i] == a[m] + 'a' - 'A')) {
            k++;
            m++;
        }
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 'a' + 'A';
        printf ("(%c,%d)", a[i], k);
        i = m;
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

