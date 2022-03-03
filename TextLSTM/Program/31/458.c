struct  student {
    char a [1000];
    struct  student *next;
};
void main () {
    struct  student *head, *p1, *p2;
    p1 = head = (struct  student *) malloc (LEN);
    p1->next = NULL;
    gets (p1->a);
    while (strcmp (p1->a, "end")) {
        p2 = (struct  student *) malloc (LEN);
        p2->next = p1;
        p1 = p2;
        gets (p1->a);
    }
    while (p1->next != NULL) {
        p1 = p1->next;
        printf ("%s\n", p1->a);
    }
}

