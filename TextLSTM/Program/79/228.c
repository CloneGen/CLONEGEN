int main () {
    int monkey [500], r [500], i, j, m, n, left, count, time = 0;
    scanf ("%d%d", &m, &n);
    while (m != 0 && n != 0) {
        for (i = 0; i < m; i++) {
            monkey[i] = 1;
        }
        left = m;
        count = 0;
        while (left > 1) {
            for (i = 0; i < m; i++) {
                if (monkey[i])
                    count++;
                if (count == n) {
                    monkey[i] = 0;
                    left--;
                    if (left == 1)
                        break;
                    count = 0;
                }
            }
        }
        for (i = 0; i < m; i++) {
            if (monkey[i])
                r[time] = i;
        }
        scanf ("%d%d", &m, &n);
        time++;
    }
    for (i = 0; i < time; i++) {
        printf ("%d\n", r[i] + 1);
    }
    return 0;
}

