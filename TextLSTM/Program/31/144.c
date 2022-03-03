struct  seqs {
    char num [10];
    char name [20];
    char sex;
    int age;
    float score;
    char addr [100];
    struct  seqs *next;
};
struct  seqs *build () {
    struct  seqs *head, *newnode, *p;
    newnode = (struct  seqs *) malloc (len);
    newnode->next = NULL;
    scanf ("%s %s %c %d %f %s", newnode->num, newnode->name, &newnode->sex, &newnode->age, &newnode->score, newnode->addr);
    p = newnode;
    while (1) {
        newnode = (struct  seqs *) malloc (len);
        scanf ("%s", newnode->num);
        if (newnode->num[0] == 'e')
            break;
        scanf ("%s %c %d %f %s", newnode->name, &newnode->sex, &newnode->age, &newnode->score, newnode->addr);
        newnode->next = p;
        p = newnode;
    }
    head = p;
    return head;
}

void main () {
    int i;
    struct  seqs *p;
    p = build ();
    while (p != NULL) {
        printf ("%s %s %c %d %g %s\n", p->num, p->name, p->sex, p->age, p->score, p->addr);
        p = p->next;
    }
}

