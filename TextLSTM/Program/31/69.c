struct  Student {
    char num [20];
    char name [20];
    char gender;
    int age;
    char score [10];
    char address [20];
    struct  Student *next;
    struct  Student *upper;
};
int n;

struct  Student *creat (void) {
    struct  Student *head, *end;
    struct  Student *p1, *p2;
    n = 0;
    p1 = p2 = (struct  Student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", p1->num, p1->name, &p1->gender, &p1->age, p1->score, p1->address);
    head = NULL;
    while (p1->num[0] != 'e') {
        n = n + 1;
        if (n == 1) {
            head = p1;
            p1->upper = NULL;
        }
        else {
            p2->next = p1;
            p1->upper = p2;
        }
        p2 = p1;
        p1 = (struct  Student *) malloc (LEN);
        scanf ("%s", p1->num);
        if (p1->num[0] == 'e') {
            end = p2;
            break;
        }
        scanf ("%s %c %d %s %s", p1->name, &p1->gender, &p1->age, p1->score, p1->address);
    }
    p2->next = NULL;
    return (end);
}

int main () {
    struct  Student *pt;
    pt = creat ();
    do {
        printf ("%s %s %c %d %s %s\n", pt->num, pt->name, pt->gender, pt->age, pt->score, pt->address);
        pt = pt->upper;
    }
    while (pt != NULL);
    return 0;
}

