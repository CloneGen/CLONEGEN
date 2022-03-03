int prime (int x);
int huiwen (int x);

void main () {
    int i, m, n, num = 0, str [1000];
    scanf ("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        if ((prime (i) * huiwen (i)) != 0) {
            str[num] = i;
            num++;
        }
    }
    str[num] = '\0';
    if (num == 0)
        printf ("no");
    else {
        printf ("%d", str[0]);
        for (i = 1; i <= num - 1; i++)
            printf (",%d", str[i]);
    }
}

int prime (int x) {
    int i;
    for (i = 2; i <= x; i++) {
        if (x % i == 0)
            break;
    }
    if (i == x)
        return (1);
    else
        return (0);
}

int huiwen (int x) {
    int c, d;
    d = x;
    c = x % 10;
    while (x) {
        x = x / 10;
        c = c * 10 + x % 10;
    }
    c = c / 10;
    if (c == d)
        return (1);
    else
        return (0);
}

