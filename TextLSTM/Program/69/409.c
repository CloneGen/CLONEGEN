struct  node {
    int x;
    struct  node *pb;
    struct  node *pn;
};
void jianli (struct  node *ph, int *f, int *w, struct  node **pl) {
    char c;
    *f = 1;
    *w = 1;
    struct  node *p, *q;
    c = getchar ();
    if (c == '-') {
        *f = -1;
        c = getchar ();
    }
    q = ph;
    if (c == '0') {
        for (;;) {
            if (c != '0')
                break;
            else
                c = getchar ();
        }
        if ((c < '0') || (c > '9')) {
            p = (struct  node *) malloc (sizeof (struct  node));
            p->pn = q->pn;
            p->pb = q;
            q->pn = p;
            q = p;
            p->x = 0;
            *w = 1;
            *pl = p;
            return;
        }
    }
    for (;;) {
        if ((c < '0') || (c > '9')) {
            *pl = p;
            return;
        }
        p = (struct  node *) malloc (sizeof (struct  node));
        p->pn = q->pn;
        p->pb = q;
        q->pn = p;
        q = p;
        p->x = c - '0';
        *w = *w + 1;
        c = getchar ();
    }
}

void shanchu (struct  node *ph) {
    struct  node *p, *q;
    p = ph;
    for (;;) {
        if (p == NULL)
            return;
        q = p->pn;
        free (p);
        p = q;
    }
}

void jia (struct  node *pl1, struct  node *pl2, struct  node *p3) {
    struct  node *a, *b, *p, *r;
    int c, j = 0;
    a = pl1;
    b = pl2;
    for (;;) {
        if ((a->pb == NULL) && (b->pb == NULL)) {
            if (j == 1) {
                p = (struct  node *) malloc (sizeof (struct  node));
                p->pn = p3->pn;
                p->pb = p3;
                p3->pn = p;
                (p->pn)->pb = p;
                p->x = 1;
            }
            return;
        }
        else if (a->pb == NULL) {
            r = a;
            a = b;
            b = r;
        }
        if (b->pb == NULL) {
            c = a->x + j;
            j = 0;
            if (c > 9) {
                j = 1;
                c = c - 10;
            }
            p = (struct  node *) malloc (sizeof (struct  node));
            p->pn = p3->pn;
            p->pb = p3;
            p3->pn = p;
            (p->pn)->pb = p;
            p->x = c;
            a = a->pb;
            continue;
        }
        c = a->x + b->x + j;
        j = 0;
        if (c > 9) {
            j = 1;
            c = c - 10;
        }
        p = (struct  node *) malloc (sizeof (struct  node));
        p->pn = p3->pn;
        p->pb = p3;
        p3->pn = p;
        if (p->pn != NULL)
            (p->pn)->pb = p;
        p->x = c;
        a = a->pb;
        b = b->pb;
    }
}

void jian (struct  node *pl1, struct  node *pl2, struct  node *p3) {
    struct  node *a, *b, *p, *r;
    int c, j = 0;
    a = pl1;
    b = pl2;
    for (;;) {
        if ((a->pb == NULL) && (b->pb == NULL)) {
            return;
        }
        if (b->pb == NULL) {
            c = a->x - j;
            j = 0;
            if (c < 0) {
                j = 1;
                c = c + 10;
            }
            p = (struct  node *) malloc (sizeof (struct  node));
            p->pn = p3->pn;
            p->pb = p3;
            p3->pn = p;
            p->x = c;
            a = a->pb;
            continue;
        }
        c = (a->x) - (b->x) - j;
        j = 0;
        if (c < 0) {
            j = 1;
            c = c + 10;
        }
        p = (struct  node *) malloc (sizeof (struct  node));
        p->pn = p3->pn;
        p->pb = p3;
        p3->pn = p;
        p->x = c;
        a = a->pb;
        b = b->pb;
    }
}

void shuchu (struct  node *p3, int f) {
    struct  node *p;
    p = p3->pn;
    for (;;) {
        if ((p == NULL) || (p->x != 0))
            break;
        else
            p = p->pn;
    }
    if (p == NULL)
        printf ("0\n");
    else {
        if (f == -1)
            printf ("-");
        for (;;) {
            if (p == NULL) {
                printf ("\n");
                break;
            }
            else {
                printf ("%d", p->x);
                p = p->pn;
            }
        }
    }
}

int bijiao (struct  node *p1, struct  node *p2, int w1, int w2) {
    struct  node *a, *b;
    if (w1 != w2)
        return w1 - w2;
    else {
        a = p1->pn;
        b = p2->pn;
        for (;;) {
            if (a == NULL)
                return 0;
            if ((a->x) != (b->x))
                return (a->x) - (b->x);
            else {
                a = a->pn;
                b = b->pn;
            }
        }
    }
}

int main () {
    int f1, f2, w1, w2, f;
    struct  node *p1 = (struct  node *) malloc (sizeof (struct  node));
    struct  node *p2 = (struct  node *) malloc (sizeof (struct  node));
    struct  node *p3 = (struct  node *) malloc (sizeof (struct  node));
    struct  node *pl1, *pl2, *p;
    p1->pn = NULL;
    p2->pn = NULL;
    p3->pn = NULL;
    p1->pb = NULL;
    p2->pb = NULL;
    p3->pb = NULL;
    jianli (p1, &f1, &w1, &pl1);
    jianli (p2, &f2, &w2, &pl2);
    if (f1 * f2 == 1) {
        jia (pl1, pl2, p3);
        shuchu (p3, f1);
    }
    else {
        if (bijiao (p1, p2, w1, w2) == 0)
            printf ("0\n");
        else {
            if (bijiao (p1, p2, w1, w2) < 0) {
                f = f1;
                f1 = f2;
                f2 = f;
                p = p1;
                p1 = p2;
                p2 = p;
                p = pl1;
                pl1 = pl2;
                pl2 = p;
            }
            jian (pl1, pl2, p3);
            shuchu (p3, f1);
        }
    }
    shanchu (p1);
    shanchu (p2);
    shanchu (p3);
    return 0;
}

