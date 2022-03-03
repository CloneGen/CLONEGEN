struct  Per {
    int num;
    struct  Per *next;
};
int main () {
    int n, m, i;
    struct  Per *head;
    struct  Per *p;
    while (1) {
        scanf ("%d %d", &n, &m);
        if (n == 0 || m == 0)
            break;
        if (n == 1 || m == 1) {
            printf ("%d\n", n);
            continue;
        }
        head = (struct  Per *) malloc (LEN);
        p = head;
        for (i = 1; i <= n; i++) {
            p->num = i;
            if (i == n) {
                p->next = head;
            }
            else {
                p->next = (struct  Per *) malloc (LEN);
                p = p->next;
            }
        }
        p = head;
        while (p != p->next) {
            for (i = 1; i < m; i++) {
                if (i == (m - 1)) {
                    p->next = p->next->next;
                    p = p->next;
                }
                else
                    p = p->next;
            }
        }
        printf ("%d\n", p->num);
    }
    getchar ();
    getchar ();
    return 0;
}

