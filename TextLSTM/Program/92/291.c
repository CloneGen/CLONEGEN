int compare (const  void *p, const  void *q) {
    int *t1 = (int *) p;
    int *t2 = (int *) q;
    return *t2 - *t1;
}

int main () {
    int n, i, j, k, t_max, t_min, q [1000], t [1000], win, loss;
    while (1) {
        scanf ("%d", &n);
        if (n == 0)
            return 0;
        for (i = 0; i < n; i++) {
            scanf ("%d", &t[i]);
        }
        for (i = 0; i < n; i++) {
            scanf ("%d", &q[i]);
        }
        qsort (t, n, sizeof (int), compare);
        qsort (q, n, sizeof (int), compare);
        t_max = 0;
        t_min = n - 1;
        win = loss = 0;
        for (i = 0; i < n; i++) {
            if (t[t_max] > q[i]) {
                win++;
                t_max++;
            }
            else if (t[t_max] < q[i]) {
                loss++;
                t_min--;
            }
            else if (t[t_max] == q[i]) {
                for (j = i + 1, k = t_max + 1; j < n; j++, k++) {
                    if (t[k] <= q[j] && t[t_max] > q[j])
                        break;
                }
                if (j < n) {
                    if (t[t_min] < q[i])
                        loss++;
                    t_min--;
                }
                else
                    t_max++;
            }
        }
        printf ("%d\n", 200 * (win - loss));
    }
    return 0;
}

