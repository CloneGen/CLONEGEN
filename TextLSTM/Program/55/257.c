void main () {
    int a, b, i, j = 0, x = 0, y, z = 1;
    scanf ("%d", &a);
    char a_shu [65], b_shu [65];
    while (1) {
        if ((y = getchar ()) != ' ')
            a_shu[j++] = y;
        else if (j > 0) {
            a_shu[j] = '\0';
            break;
        }
    }
    for (i = 0; a_shu[i] != '\0'; i++) {
        if (a_shu[i] <= 'z' && a_shu[i] >= 'a')
            a_shu[i] -= 'a' - 10;
        else if (a_shu[i] <= 'Z' && a_shu[i] >= 'A')
            a_shu[i] -= 'A' - 10;
        else
            a_shu[i] -= 48;
    }
    scanf ("%d", &b);
    for (i--; i >= 0; i--) {
        x += a_shu[i] * z;
        z = z * a;
    }
    for (i = 0; x >= b; i++) {
        b_shu[i] = x % b;
        x = x / b;
        if (b_shu[i] >= 10)
            b_shu[i] += 'A' - 10;
    }
    if (x >= 10) {
        x += 'A' - 10;
        printf ("%c", x);
    }
    else
        printf ("%d", x);
    for (i--; i >= 0; i--)
        if (b_shu[i] >= 10)
            printf ("%c", b_shu[i]);
        else
            printf ("%d", b_shu[i]);
}

