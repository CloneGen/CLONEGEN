struct  book {
    int ID;
    char author [30];
    struct  book *next;
};
int n, max = 0;
char c;

struct  book *create () {
    struct  book *head, *p1, *p2;
    p1 = (struct  book *) malloc (LEN);
    scanf ("%d %s", &p1->ID, p1->author);
    head = p1;
    p2 = p1;
    p1->next = NULL;
    int i = 1;
    do {
        if (i == n)
            break;
        p1 = (struct  book *) malloc (LEN);
        scanf ("%d %s", &p1->ID, p1->author);
        p2->next = p1;
        p2 = p1;
        p1->next = NULL;
        i++;
    }
    while (1);
    return (head);
}

int main () {
    struct  book *head;
    int i;
    int *num;
    num = (int *) malloc (26 * sizeof (int));
    for (i = 0; i < 26; i++)
        *(num + i) = 0;
    scanf ("%d", &n);
    head = create ();
    struct  book *p;
    char *s;
    p = head;
    while (p) {
        for (s = p->author; *s != '\0'; s++) {
            int temp;
            temp = *s - 'A';
            (*(num + temp))++;
        }
        p = p->next;
    }
    for (i = 0; i < 26; i++) {
        if (*(num + i) > max)
            max = *(num + i);
    }
    for (i = 0; i < 26; i++) {
        if (*(num + i) == max)
            break;
    }
    printf ("%c\n%d\n", 'A' + i, max);
    c = 'A' + i;
    p = head;
    while (p) {
        for (s = p->author; *s != '\0'; s++) {
            if (*s == c)
                break;
        }
        if (*s != '\0')
            printf ("%d\n", p->ID);
        p = p->next;
    }
}

