struct  student {
    char num [100];
    char name [100];
    char gender [2];
    char age [100];
    char score [100];
    char add [100];
    struct  student *next;
};
struct  student *creat (void) {
    struct  student *head, *p1;
    head = NULL;
    while (1) {
        p1 = (struct  student *) malloc (LEN);
        scanf ("%s", p1->num);
        p1->next = head;
        if (strcmp (p1->num, "end") == 0)
            break;
        scanf ("%s%s%s%s%s", p1->name, p1->gender, p1->age, p1->score, p1->add);
        head = p1;
    }
    return (head);
}

void print (struct  student *head) {
    struct  student *p;
    p = head;
    while (p != NULL) {
        printf ("%s %s %s %s %s %s\n", p->num, p->name, p->gender, p->age, p->score, p->add);
        p = p->next;
    }
}

void main () {
    struct  student *po;
    po = creat ();
    print (po);
}

