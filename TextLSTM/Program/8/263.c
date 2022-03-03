void main () {
    void shuru (int *p, int len);
    void paixu (int *p, int len);
    void hebing (int *p1, int *p2);
    void shuchu (int *p, int, int);
    int m, n;
    scanf ("%d%d", &m, &n);
    int *p1, *p2;
    int a [200] = {'\0'}, b [100] = {'\0'};
    p1 = a;
    p2 = b;
    shuru (p1, m);
    shuru (p2, n);
    paixu (p1, m);
    paixu (p2, n);
    hebing (p1, p2);
    shuchu (p1, m, n);
}

void shuru (int *p, int len) {
    int i;
    for (i = 0; i < len; i++)
        scanf ("%d", p + i);
}

void paixu (int *p, int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = i + 1; j < len; j++)
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
}

void hebing (int *p1, int *p2) {
    int i, j, flag;
    for (i = 0;; i++) {
        flag = 0;
        if (*(p1 + i) == '\0') {
            for (j = 0; *(p2 + j) != '\0'; j++)
                *(p1 + i + j) = *(p2 + j);
            *(p1 + i + j) = '\0';
            flag = 1;
        }
        if (flag == 1)
            break;
    }
}

void shuchu (int *p, int m, int n) {
    int i;
    char c;
    for (i = 0; *(p + i) != '\0'; i++)
        printf ("%d%c", *(p + i), c = (i < n + m - 1) ? ' ' : '\n');
}

