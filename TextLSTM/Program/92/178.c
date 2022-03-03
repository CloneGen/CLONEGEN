int Compare (const  void *a, const  void *b);
int WinCount (int *Q, int *T, int n);
int max (int a, int b);

int main () {
    int n;
    int TianJi [1000];
    int QiWang [1000];
    int i, j;
    int *pwin [1000];
    FILE *fp;
    fp = fopen ("horse.txt", "r");
    for (i = 0; i < 1000; i++) {
        if ((pwin[i] = (int *) malloc (sizeof (int) * 1000)) == NULL) {
            printf ("Error: memory out!");
            return 1;
        }
    }
    while (1) {
        fscanf (fp, "%d", &n);
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++) {
            fscanf (fp, "%d", &TianJi[i]);
            scanf ("%d", &TianJi[i]);
        }
        for (i = 0; i < n; i++) {
            fscanf (fp, "%d", &QiWang[i]);
            scanf ("%d", &QiWang[i]);
        }
        qsort ((void *) &TianJi[0], n, sizeof (int), Compare);
        qsort ((void *) &QiWang[0], n, sizeof (int), Compare);
        for (i = 0; i < n; i++) {
            if (TianJi[0] > QiWang[i])
                *(pwin[i] + 0) = 1;
            else if (TianJi[0] < QiWang[i])
                *(pwin[i] + 0) = -1;
            else
                *(pwin[i] + 0) = 0;
        }
        for (i = n - 2; i >= 0; i--)
            for (j = 1; j < n - i; j++)
                if (QiWang[i + j] < TianJi[j])
                    *(pwin[i] + j) = *(pwin[i] + j - 1) + 1;
                else if (QiWang[i + j] > TianJi[j])
                    *(pwin[i] + j) = *(pwin[i + 1] + j - 1) - 1;
                else if (*(pwin[i + 1] + j - 1) - 1 > *(pwin[i] + j - 1))
                    *(pwin[i] + j) = *(pwin[i + 1] + j - 1) - 1;
                else
                    *(pwin[i] + j) = *(pwin[i] + j - 1);
        printf ("%d\n", *(pwin[0] + n - 1) * 200);
    }
    fclose (fp);
    return 0;
}

int Compare (const  void *a, const  void *b) {
    return *(int*) b - *(int*) a;
}

int max (int a, int b) {
    return (a > b) ? a : b;
}

