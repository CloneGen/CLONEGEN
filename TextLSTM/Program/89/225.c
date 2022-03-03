int a [10001] = {0};

int main () {
    int n, tag, i, j;
    scanf ("%d", &n);
    while (1) {
        scanf ("%d%d", &i, &j);
        if (!(i || j))
            break;
        a[i] = 1;
    }
    for (int i = 0;
    i < n; i++)
        if (!a[i]) {
            printf ("%d\n", i);
            return 0;
        }
    printf ("NOT FOUND\n");
}

