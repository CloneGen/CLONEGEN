int main () {
    char l [1000];
    int i, num [1000], j, rate, k, circle, a;
    scanf ("%s", &l);
    i = 0;
    rate = 1;
    int terminalnum [1000] = {0};
    while (l[i] != '\0') {
        for (j = 1; l[i] != ',' && l[i] != '\0'; i++, j++) {
            num[j] = l[i] - '0';
        }
        for (k = 0; k < j - 1; k++) {
            a = 1;
            for (circle = 1; circle <= k; circle++) {
                a *= 10;
            }
            terminalnum[rate] += a * num[j - k - 1];
        }
        if (l[i] == '\0') {
            break;
        }
        else {
            i += 1;
        }
        rate += 1;
    }
    int max, m, n, min;
    n = 0;
    max = 0;
    for (m = 1; m <= rate; m++) {
        if (terminalnum[m] < max) {
            max = max;
        }
        else {
            if (terminalnum[m] > max) {
                max = terminalnum[m];
            }
            else {
                n += 1;
            }
        }
    }
    if (n == rate - 1) {
        printf ("No\n");
    }
    else {
        for (m = 1; m <= rate; m++) {
            if (terminalnum[m] == max) {
                terminalnum[m] = -1;
            }
        }
        min = 0;
        for (m = 1; m <= rate; m++) {
            if (terminalnum[m] < min) {
                min = min;
            }
            else {
                min = terminalnum[m];
            }
        }
        printf ("%d\n", min);
    }
    return 0;
}

