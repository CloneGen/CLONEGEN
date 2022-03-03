int main () {
    int n, k, m;
    int s1, s2;
    int z;
    scanf ("%d%d", &n, &k);
    s1 = pow (n, n);
    s2 = pow (n - 1, n - 1);
    z = k * 1.0 / s2;
    z++;
    m = z * s1 - (n - 1) * k;
    printf ("%d", m);
    return 0;
}

