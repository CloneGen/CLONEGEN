int main () {
    int a, b, c, d;
    scanf ("%d", &a);
    b = a % 3;
    c = a % 5;
    d = a % 7;
    if (b == 0 & c == 0 & d == 0)
        printf ("%d %d %d", 3, 5, 7);
    else if (b == 0 & c == 0)
        printf ("%d %d", 3, 5);
    else if (b == 0 & d == 0)
        printf ("%d %d", 3, 7);
    else if (c == 0 & d == 0)
        printf ("%d %d", 5, 7);
    else if (b == 0)
        printf ("%d", 3);
    else if (c == 0)
        printf ("%d", 5);
    else if (d == 0)
        printf ("%d", 7);
    else
        printf ("n");
    return 0;
}

