struct  student {
    char number [100];
    char name [100];
    struct  student *next;
};
int n;

struct  student *creat (void) {
    struct  student *head;
    struct  student *p1, *p2;
    int i = 0;
    p1 = p2 = (struct  student *) malloc (LEN);
    scanf ("%s %s", &p1->number, &p1->name);
    head = NULL;
    do {
        i = i + 1;
        if (i == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct  student *) malloc (LEN);
        scanf ("%s %s", &p1->number, &p1->name);
    }
    while (i < n - 1);
    p2->next = p1;
    p2 = p1;
    p2->next = NULL;
    return (head);
}

void main () {
    int h, i, k, m, j, max;
    struct  student *head;
    struct  student *p;
    int sum [10000] = {0};
    scanf ("%d", &n);
    head = creat ();
    p = head;
    for (i = 65, k = 0; i <= 90; i++, k++) {
        p = head;
        do {
            m = strlen (p->name);
            for (j = 0; j < m; j++) {
                if (p->name[j] == i)
                    sum[k]++;
            }
            p = p->next;
        }
        while (p != NULL);
    }
    for (i = 0, max = sum[0]; i <= k; i++) {
        if (sum[i] >= max) {
            h = i;
            max = sum[i];
        }
    }
    printf ("%c\n%d\n", h + 65, max);
    p = head;
    do {
        m = strlen (p->name);
        for (j = 0; j < m; j++) {
            if (p->name[j] == h + 65)
                printf ("%s\n", p->number);
        }
        p = p->next;
    }
    while (p != NULL);
}

