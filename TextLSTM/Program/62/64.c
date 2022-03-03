int main () {
    char a [1000];
    cin.getline (a, 1000);
    int la = strlen (a);
    int i, j, k;
    char *p;
    for (i = 0; i < la; i++) {
        if (a[i] == ' ') {
            j = 0;
            while (a[i + 1 + j] == ' ')
                j++;
            if (j > 0) {
                la = la - j;
                for (k = i + 1; k < la; k++) {
                    a[k] = a[k + j];
                }
            }
        }
    }
    for (p = a; p < &a[la]; p++) {
        cout << *p;
    }
    return 0;
}

