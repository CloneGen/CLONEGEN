int main () {
    int a, b, c, d, e, f, g, h, i;
    scanf ("%d", &a);
    b = a % 10;
    c = a / 10;
    d = ((a - b) % 100) / 10;
    e = a / 100;
    f = ((a - b - d * 10) % 1000) / 100;
    g = a / 1000;
    h = ((a - b - d * 10 - f * 100) % 10000) / 1000;
    i = a / 10000;
    if (c < 1) {
        printf ("%d\n", a);
    }
    else {
        if (e < 1) {
            printf ("%d%d\n", b, d);
        }
        else {
            if (g < 1) {
                printf ("%d%d%d\n", b, d, f);
            }
            else {
                printf ("%d%d%d%d\n", b, d, f, h);
            }
        }
    }
}

