int main () {
    struct  student {
        int num;
        int ch;
        int ma;
        int sum;
    };
    struct  student *p;
    int n, i, j, t1, t2, a1 = 0, a2 = 0, a3 = 0, k1, k2, k3;
    scanf ("%d", &n);
    p = (struct  student *) malloc (n * sizeof (struct  student));
    for (i = 0; i < n; i++) {
        scanf ("%d%d%d", &p[i].num, &p[i].ch, &p[i].ma);
        p[i].sum = p[i].ch + p[i].ma;
    }
    for (i = 0; i < n; i++)
        if (p[i].sum > a1) {
            k1 = i;
            a1 = p[i].sum;
        }
    for (i = 0; i < n; i++)
        if (p[i].sum <= a1 && p[i].sum > a2 && i != k1) {
            k2 = i;
            a2 = p[i].sum;
        }
    for (i = 0; i < n; i++)
        if (p[i].sum <= a2 && p[i].sum > a3 && i != k1 && i != k2) {
            k3 = i;
            a3 = p[i].sum;
        }
    printf ("%d %d\n%d %d\n%d %d\n", p[k1].num, p[k1].sum, p[k2].num, p[k2].sum, p[k3].num, p[k3].sum);
    return 0;
}

