int main (int a, int b) {
    scanf ("%d%d", &a, &b);
    while (a != b) {
        while (a > b)
            a /= 2;
        while (a < b)
            b /= 2;
    }
    printf ("%d\n", a);
}

