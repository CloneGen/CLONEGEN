void main () {
    int w, month [12], n, i = 0;
    scanf ("%d", &w);
    w = w + 12;
    if ((w) % 7 == 5) {
        month[i] = 1;
        i++;
    }
    w = w + 3;
    if (w % 7 == 5) {
        month[i] = 2;
        i++;
        month[i] = 3;
        i++;
    }
    w = w + 3;
    if (w % 7 == 5) {
        month[i] = 4;
        i++;
    }
    w = w + 2;
    if (w % 7 == 5) {
        month[i] = 5;
        i++;
    }
    w = w + 3;
    if (w % 7 == 5) {
        month[i] = 6;
        i++;
    }
    w = w + 2;
    if (w % 7 == 5) {
        month[i] = 7;
        i++;
    }
    w = w + 3;
    if (w % 7 == 5) {
        month[i] = 8;
        i++;
    }
    w = w + 3;
    if (w % 7 == 5) {
        month[i] = 9;
        i++;
    }
    w = w + 2;
    if (w % 7 == 5) {
        month[i] = 10;
        i++;
    }
    w = w + 3;
    if (w % 7 == 5) {
        month[i] = 11;
        i++;
    }
    w = w + 2;
    if (w % 7 == 5) {
        month[i] = 12;
        i++;
    }
    n = i;
    for (i = 0; i < n; i++)
        printf ("%d\n", month[i]);
}

