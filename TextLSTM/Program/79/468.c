int main () {
    int n, m, i, s, j, counter = 0;
    int answer [200];
    for (;;) {
        scanf ("%d%d", &n, &m);
        if (n == 0 && m == 0)
            break;
        s = 0;
        for (i = 2; i <= n; i++) {
            s = (s + m) % i;
        }
        answer[counter] = s + 1;
        counter += 1;
    }
    for (j = 0; j < counter; j++) {
        printf ("%d\n", answer[j]);
    }
    return 0;
}

