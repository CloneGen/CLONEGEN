int main () {
    char x0 [4000], y0 [4000];
    int x [1000] = {0}, y [1000] = {0}, people, i, j = 0, num [1000] = {0}, nummax = 0, c = 0;
    int min = 2000, max = 0;
    scanf ("%s", x0);
    scanf ("%s", y0);
    for (i = 0; i <= (strlen (x0) - 1); i++) {
        if ((x0[i] >= '0') && (x0[i] <= '9'))
            c = c * 10 + x0[i] - '0';
        else {
            x[j++] = c;
            c = 0;
        }
        if (i == (strlen (x0) - 1)) {
            x[j++] = c;
            c = 0;
        }
    }
    j = 0;
    c = 0;
    for (i = 0; i <= strlen (y0) - 1; i++) {
        if ((y0[i] >= '0') && (y0[i] <= '9'))
            c = c * 10 + y0[i] - '0';
        else {
            y[j++] = c;
            c = 0;
        }
        if (i == (strlen (y0) - 1)) {
            y[j++] = c;
            c = 0;
        }
    }
    people = j;
    for (i = 0; i <= (people - 1); i++) {
        if (x[i] < min)
            min = x[i];
        if (y[i] > max)
            max = y[i];
    }
    for (i = min; i <= max; i++) {
        for (j = 0; j <= people - 1; j++) {
            if ((i >= x[j]) && (i < y[j]))
                num[i]++;
        }
    }
    for (i = 0; i <= 999; i++) {
        if (num[i] > nummax)
            nummax = num[i];
    }
    printf ("%d %d", people, nummax);
}

