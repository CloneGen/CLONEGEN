int King (int a, int b) {
    int monkey, num, i, j, countor;
    monkey = a;
    num = b;
    int *Monkey = (int *) malloc (monkey * sizeof (int));
    for (i = 0; i < monkey; i++) {
        *(Monkey +i) = 0;
    }
    for (i = 0, j = 0, countor = 1; j < monkey - 1;) {
        if (*(Monkey +i % monkey) == -1) {
            i++;
            continue;
        }
        if (countor == num) {
            *(Monkey +i % monkey) = -1;
            j++;
            i++;
            countor = 1;
            continue;
        }
        i++;
        countor++;
    }
    for (i = 0; i < monkey; i++) {
        if (*(Monkey +i) != -1)
            return (i + 1);
    }
    free (Monkey);
}

int main () {
    int king [100];
    int a, b, n = 0, k = 0;
    scanf ("%d%d", &a, &b);
    while (a != 0 && b != 0) {
        king[n] = King (a, b);
        n++;
        scanf ("%d%d", &a, &b);
    }
    for (k = 0; k < n; k++)
        printf ("%d\n", *(king + k));
    return 0;
}

