main () {
    int i;
    char a [533], b [533], c [533];
    cin >> a >> b;
    int al, bl, cl;
    al = strlen (a);
    bl = strlen (b);
    if (bl > al) {
        strcpy (c, a);
        strcpy (a, b);
        strcpy (b, c);
    }
    al = strlen (a);
    bl = strlen (b);
    cl = al + 1;
    for (i = 0; i < cl; i++) {
        c[i] = '0';
    }
    c[cl] = '\0';
    for (i = 1; i <= bl; i++) {
        c[cl - i] = c[cl - i] + a[al - i] + b[bl - i] - '0' - '0';
        if (c[cl - i] > '9') {
            c[cl - i] = c[cl - i] - 10;
            c[cl - i - 1]++;
        }
    }
    for (i = bl + 1; i <= al; i++) {
        c[cl - i] = c[cl - i] + a[al - i] - '0';
        if (c[cl - i] > '9') {
            c[cl - i] = c[cl - i] - 10;
            c[cl - i - 1]++;
        }
    }
    for (; c[0] == '0' && cl > 1;) {
        for (int j = 0;
        j < cl; j++) {
            c[j] = c[j + 1];
        }
        cl--;
    }
    cout << c;
}

