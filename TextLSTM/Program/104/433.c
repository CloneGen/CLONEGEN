void main () {
    int jiaodian (int, int);
    int x, y, a;
    scanf ("%d%d", &x, &y);
    a = jiaodian (x, y);
    printf ("%d\n", a);
}

int jiaodian (int x, int y) {
    int a, temp;
    if (x < y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (x == y)
        a = x;
    else
        a = jiaodian (x / 2, y);
    return a;
}

