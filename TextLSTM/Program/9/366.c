int main () {
    int x [100], y [100], z [100], a, b = 1, c = 1, d = 1, e = 1, f, g, h, j, k, n;
    char o [100] [10], p [100] [10], q [100] [10], r [100] [10];
    scanf ("%d", &n);
    for (a = 1; a <= n; a++) {
        scanf ("%s", o[a]);
        scanf ("%d", &x[a]);
        if (x[a] >= 60) {
            strcpy (p[b], o[a]);
            b++;
            y[c] = x[a];
            c++;
        }
        else {
            strcpy (q[d], o[a]);
            d++;
            z[e] = x[a];
            e++;
        }
    }
    for (f = 1; f <= b - 2; f++) {
        for (g = 1; g <= b - 2; g++) {
            if (y[g] < y[g + 1]) {
                h = y[g];
                y[g] = y[g + 1];
                y[g + 1] = h;
                strcpy (r[1], p[g]);
                strcpy (p[g], p[g + 1]);
                strcpy (p[g + 1], r[1]);
            }
        }
    }
    for (j = 1; j <= b - 1; j++) {
        printf ("%s\n", p[j]);
    }
    for (k = 1; k <= d - 1; k++) {
        printf ("%s\n", q[k]);
    }
    return 0;
}

