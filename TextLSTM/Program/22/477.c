void main () {
    int i, j, m [max] = {0}, gs, r, s, temp, k;
    char a [2000];
    gets (a);
    j = strlen (a);
    gs = 1;
    for (i = 0; i < j; i++) {
        if (a[i] != ',') {
            m[gs] = m[gs] * 10 + (a[i] - 48);
        }
        else {
            gs++;
        }
    }
    if (gs == 1)
        printf ("No");
    else {
        for (r = 1; r <= gs; r++) {
            for (s = 1; s < gs; s++) {
                if (m[s] < m[s + 1]) {
                    temp = m[s];
                    m[s] = m[s + 1];
                    m[s + 1] = temp;
                }
            }
        }
        k = 0;
        for (r = 2; r <= gs; r++) {
            if (m[r] != m[1]) {
                printf ("%d", m[r]);
                k++;
                break;
            }
        }
        if (k == 0)
            printf ("No");
    }
}

