struct  student {
    char s [100];
    struct  student *next;
};
int n;

struct  student *creat (void) {
    struct  student *head;
    struct  student *p1, *p2;
    n = 0;
    p1 = p2 = (struct  student *) malloc (LEN);
    gets (p1->s);
    while (strcmp (p1->s, "end") != 0) {
        n++;
        if (n == 1)
            p1->next = NULL;
        else
            p1->next = p2;
        p2 = p1;
        p1 = (struct  student *) malloc (LEN);
        gets (p1->s);
    }
    head = p2;
    return (head);
}

void print (struct  student *head) {
    struct  student *p;
    p = head;
    if (head != NULL)
        do {
            if (p->next != NULL) {
                printf (p->s);
                printf ("\n");
            }
            else
                printf (p->s);
            p = p->next;
        }
        while (p != NULL);
}

void main () {
    struct  student *head;
    head = creat ();
    print (head);
}

