int s [100];

int f (int a, int min) {
    if (a < min) {
        return 0;
    }
    int result = 1;
    for (int i = min;
    i < a; i++) {
        if (a % i == 0) {
            result += f (a / i, i);
        }
    }
    return result;
}

main () {
    int m, mm;
    scanf ("%d", &m);
    for (int i = 0;
    i < m; i++) {
        scanf ("%d", &mm);
        printf ("%d\n", f (mm, 2));
    }
}

