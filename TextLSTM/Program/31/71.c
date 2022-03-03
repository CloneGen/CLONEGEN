int main () {
    struct  student {
        char number [20];
        char name [20];
        char sex;
        int age;
        float score;
        char address [20];
        struct  student *fomer;
        struct  student *next;
    };
    struct  student *head, *p, *wei;
    int i, j;
    head = (struct  student *) malloc (sizeof (struct  student));
    p = head;
    p->fomer = NULL;
    if (p == NULL) {
        printf ("fail!!!");
        exit (-1);
    }
    scanf ("%s%s %c %d%f%s", &p->number, &p->name, &p->sex, &p->age, &p->score, &p->address);
    for (i = 1; i <= 1000; i++) {
        p->next = (struct  student *) malloc (sizeof (struct  student));
        p->next->fomer = p;
        p = p->next;
        scanf ("%s%s %c %d%g%s", &p->number, &p->name, &p->sex, &p->age, &p->score, &p->address);
        if (*p->number == 'e') {
            p->fomer->next = NULL;
            wei = p->fomer;
            break;
        }
    }
    p = wei;
    for (; p != NULL;) {
        printf ("%s %s %c %d %g %s\n", p->number, p->name, p->sex, p->age, p->score, p->address);
        p = p->fomer;
    }
}

