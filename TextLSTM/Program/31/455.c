struct  student {
    char num [40];
    int age;
    char score [20];
    char name [40];
    char gender;
    char addr [40];
    struct  student *next;
}
*p1, *p2;
int n;
struct  student *creat (void);
struct  student *backward (struct  student *);
void output (struct  student *);
void free (struct  student);

int main () {
    struct  student *head;
    head = creat ();
    head = backward (head);
    output (head);
    free (head);
    return 0;
}

struct  student *creat (void) {
    struct  student *head;
    n = 0;
    p1 = p2 = (struct  student *) malloc (LEN);
    head = NULL;
    char tmp [40];
    scanf ("%s", tmp);
    while (strcmp (tmp, "end") != 0) {
        scanf (" %s %c %d %s %s", p1->name, &p1->gender, &p1->age, p1->score, p1->addr);
        strcpy (p1->num, tmp);
        n = n + 1;
        if (n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct  student *) malloc (LEN);
        scanf ("%s", tmp);
    }
    p2->next = NULL;
    return (head);
}

struct  student *backward (struct  student *head) {
    struct  student *new_head;
    p1 = head;
    p2 = NULL;
    while (p1->next != NULL) {
        p2 = p1;
        p1 = p1->next;
    }
    new_head = p1;
    p1->next = p2;
    p2->next = NULL;
    while (head->next != NULL) {
        p1 = head;
        p2 = NULL;
        while (p1->next != NULL) {
            p2 = p1;
            p1 = p1->next;
        }
        p1->next = p2;
        p2->next = NULL;
    }
    return (new_head);
}

void output (struct  student *outhead) {
    for (p1 = outhead; p1 != NULL; p1 = p1->next) {
        printf ("%s %s %c %d %s %s\n", p1->num, p1->name, p1->gender, p1->age, p1->score, p1->addr);
    }
}

void free (struct  student *head) {
    for (p1 = head; p1 != NULL; p1 = p1->next) {
        free (p1);
    }
}

