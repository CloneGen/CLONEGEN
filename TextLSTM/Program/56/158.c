int main () {
    char a [5], b [5], c [5], d [5], e;
    int i = 0, l;
    gets (a);
    gets (b);
    gets (c);
    gets (d);
    while (a[i] != '\0') {
        i = i + 1;
    }
    for (l = 0; l < i / 2; l++) {
        e = a[l];
        a[l] = a[i - 1 - l];
        a[i - 1 - l] = e;
    }
    i = 0;
    while (b[i] != '\0') {
        i = i + 1;
    }
    for (l = 0; l < i / 2; l++) {
        e = b[l];
        b[l] = b[i - 1 - l];
        b[i - 1 - l] = e;
    }
    i = 0;
    while (c[i] != '\0') {
        i = i + 1;
    }
    for (l = 0; l < i / 2; l++) {
        e = c[l];
        c[l] = c[i - 1 - l];
        c[i - 1 - l] = e;
    }
    i = 0;
    while (d[i] != '\0') {
        i = i + 1;
    }
    for (l = 0; l < i / 2; l++) {
        e = d[l];
        d[l] = d[i - 1 - l];
        d[i - 1 - l] = e;
    }
    i = 0;
    puts (a);
    puts (b);
    puts (c);
    puts (d);
    return 0;
}

