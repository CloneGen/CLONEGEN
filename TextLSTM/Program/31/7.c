struct  student {
    char id [10];
    char name [20];
    char gender;
    int age;
    char score [10];
    char address [20];
    struct  student *next, *up;
};
int main () {
    struct  student *head, *tail, *p, *r, *q;
    p = r = head = (struct  student *) malloc (len);
    p->up = NULL;
    do {
        scanf ("%s", p->id);
        if (strcmp (p->id, "end") != 0) {
            scanf ("%s %c %d %s %s", p->name, &p->gender, &p->age, p->score, p->address);
            p->next = r = (struct  student *) malloc (len);
            r->up = p;
            p = r;
        }
        else {
            p->next = NULL;
            tail = p->up;
            break;
        }
    }
    while (1);
    q = tail;
    do {
        printf ("%s %s %c %d %s %s\n", q->id, q->name, q->gender, q->age, q->score, q->address);
        q = q->up;
    }
    while (q != NULL);
    return 0;
}

