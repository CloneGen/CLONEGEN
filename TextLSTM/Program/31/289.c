struct  st {
    char id [20];
    char name [20];
    char sex [2];
    int age;
    char sco [20];
    char ad [20];
    struct  st *next;
};
main () {
    struct  st *head, *p1, *p2, *p;
    p1 = p2 = (struct  st *) malloc (len);
    scanf ("%s%s%s%d%s%s", p1->id, p1->name, p1->sex, &p1->age, p1->sco, p1->ad);
    p2->next = null;
    do {
        p1 = (struct  st *) malloc (len);
        scanf ("%s", p1->id);
        if (strcmp (p1->id, "end") == 0) {
            break;
        }
        scanf ("%s%s%d%s%s", p1->name, p1->sex, &p1->age, p1->sco, p1->ad);
        p1->next = p2;
        p2 = p1;
    }
    while (1);
    head = p2;
    p = head;
    do {
        printf ("%s %s %s %d %s %s\n", p->id, p->name, p->sex, p->age, p->sco, p->ad);
        p = p->next;
    }
    while (p != null);
    return 0;
}

