int comp (const  void *a, const  void *b) {
    return *(int*) a - *(int*) b;
}

main () {
    int n, th [1000], wh [1000], tfast, tslow, wfast, wslow, sum;
    scanf ("%d", &n);
    while (n != 0) {
        memset (th, 0, sizeof (int));
        memset (wh, 0, sizeof (int));
        sum = 0;
        for (int i = 0;
        i < n; i++)
            scanf ("%d", &th[i]);
        for (int i = 0;
        i < n; i++)
            scanf ("%d", &wh[i]);
        qsort (th, n, sizeof (th [0]), comp);
        qsort (wh, n, sizeof (wh [0]), comp);
        tfast = n - 1;
        wfast = n - 1;
        tslow = 0;
        wslow = 0;
        for (int i = 0;
        i < n; i++) {
            if (wh[wfast] < th[tfast]) {
                wfast--;
                tfast--;
                sum++;
            }
            else if (wh[wfast] > th[tfast]) {
                wfast--;
                tslow++;
                sum--;
            }
            else if (wh[wfast] == th[tfast]) {
                if (th[tslow] > wh[wslow]) {
                    sum++;
                    tslow++;
                    wslow++;
                }
                else if (th[tslow] < wh[wslow]) {
                    sum--;
                    tslow++;
                    wfast--;
                }
                else if (th[tslow] == wh[wslow]) {
                    if (th[tslow] < wh[wfast]) {
                        sum--;
                        tslow++;
                        wfast--;
                    }
                    else if (th[tslow] == wh[wfast]) {
                        break;
                    }
                }
            }
        }
        printf ("%d\n", 200 * sum);
        scanf ("%d", &n);
    }
}

