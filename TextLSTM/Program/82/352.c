int main (int argc, char *argv []) {
    int n, sys, dia, i, normal = 0, max = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%d %d", &sys, &dia);
        if (sys >= 90 && sys <= 140 && dia >= 60 && dia <= 90)
            normal++;
        else
            normal = 0;
        if (max < normal)
            max = normal;
    }
    printf ("%d", max);
    return 0;
}

