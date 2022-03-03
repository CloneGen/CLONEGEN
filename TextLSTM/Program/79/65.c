int j;

struct  monkey {
    int num;
    struct  monkey *next;
};
struct  monkey *create (int c) {
    struct  monkey *head, *p1, *p2;
    int i;
    p1 = p2 = (struct  monkey *) malloc (LEN);
    head = p1;
    head->num = 1;
    for (i = 1, p1->num = 1; i < c; i++) {
        p1 = (struct  monkey *) malloc (LEN);
        p1->num = i + 1;
        p2->next = p1;
        p2 = p1;
    }
    p2->next = head;
    return head;
}

struct  monkey *findout (struct  monkey *start, int d) {
    int i;
    struct  monkey *p;
    p = start;
    for (i = 1; i < d - 1; i++)
        p = p->next;
    return p;
}

struct  monkey *letout (struct  monkey *last) {
    struct  monkey *out, *next;
    out = last->next;
    last->next = out->next;
    next = out->next;
    free (out);
    return next;
}

int main () {
    int n [301], m [300], k = 0, c, d;
    while (1) {
        scanf ("%d %d", &n[k], &m[k]);
        k++;
        if (n[k - 1] == 0 && m[k - 1] == 0)
            break;
    }
    for (j = 0; j < k - 1; j++) {
        int i, king;
        struct  monkey *p1, *p2;
        if (n[j] == 1) {
            king = n[j];
        }
        else if (m[j] == 1) {
            king = n[j];
        }
        else {
            c = n[j];
            p1 = p2 = create (c);
            for (i = 1; i < c; i++) {
                d = m[j];
                p2 = findout (p1, d);
                p1 = p2;
                p2 = letout (p1);
                p1 = p2;
            }
            king = p2->num;
            free (p2);
        }
        printf ("%d\n", king);
    }
    return 0;
}

