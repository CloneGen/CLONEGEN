struct  stu {
    int num;
    struct  stu *next;
};
main () {
    int i, j, n, y, q, m, t;
    n = 1000;
    struct  stu *head, *head0, *p, *p1, *p2, *p0, *p3, *p4, *p5, *p6, *p7, *p8;
    char a [n], b [n];
    gets (a);
    i = strlen (a);
    gets (b);
    j = strlen (b);
    if (i > j) {
        t = i;
    }
    else {
        t = j;
    }
    t = t + 1;
    int e [t];
    p1 = p2 = (struct  stu *) malloc (LEN);
    p1->num = a[i - 1] - '0';
    head = p1;
    p3 = p4 = (struct  stu *) malloc (LEN);
    p3->num = b[j - 1] - '0';
    head0 = p3;
    i = i - 1;
    j = j - 1;
    p = head;
    p0 = head0;
    int c1 = 0, c2;
    c2 = p->num + p0->num;
    p5 = p6 = (struct  stu *) malloc (LEN);
    y = c2 + c1 / 10;
    p5->num = y % 10;
    c1 = c2;
    p7 = p5;
    while (i > 0 || j > 0) {
        p2 = p1;
        p1 = (struct  stu *) malloc (LEN);
        p1->num = (i > 0) ? a[--i] - '0' : 0;
        p2->next = p1;
        p4 = p3;
        p3 = (struct  stu *) malloc (LEN);
        p3->num = (j > 0) ? b[--j] - '0' : 0;
        p4->next = p3;
        p0 = p0->next;
        p = p->next;
        c2 = p->num + p0->num;
        p6 = p5;
        p5 = (struct  stu *) malloc (LEN);
        y = c2 + y / 10;
        p5->num = y % 10;
        c1 = c2;
        p6->next = p5;
    }
    p1->next = NULL;
    p3->next = NULL;
    p6 = p5;
    p5 = (struct  stu *) malloc (LEN);
    p5->num = y / 10;
    p6->next = p5;
    p5->next = NULL;
    p = head;
    p0 = head0;
    p8 = p7;
    for (m = t - 1; p8 != NULL; m--) {
        e[m] = p8->num;
        p8 = p8->next;
    }
    m = 0;
    if (p5->num == 0 && t == 2) {
        m = 1;
    }
    else {
        while (e[m] == 0 && m < t) {
            m++;
        }
    }
    for (y = m; y < t; y++) {
        printf ("%d", e[y]);
    }
    getchar ();
    getchar ();
    getchar ();
}

