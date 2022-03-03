struct  student {
    char name [20];
    int grade_1;
    int grade_2;
    char a;
    char b;
    int paper;
    int sum;
    int flag;
    struct  student *next;
};
int n, k;
int j;

struct  student *creat (void) {
    struct  student *head;
    struct  student *p1, *p2;
    int i;
    j = 0;
    p1 = p2 = (struct  student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", &p1->name, &p1->grade_1, &p1->grade_2, &p1->a, &p1->b, &p1->paper);
    p1->sum = 0;
    p1->flag = 0;
    if (p1->grade_1 > 80 && p1->paper > 0)
        p1->sum += 8000;
    if (p1->grade_1 > 85 && p1->grade_2 > 80)
        p1->sum += 4000;
    if (p1->grade_1 > 90)
        p1->sum += 2000;
    if (p1->grade_1 > 85 && p1->b == 'Y')
        p1->sum += 1000;
    if (p1->grade_2 > 80 && p1->a == 'Y')
        p1->sum += 850;
    head = NULL;
    for (i = 0;; i++) {
        j = j + 1;
        if (j == 1) {
            head = p1;
        }
        else {
            p2->next = p1;
        }
        p2 = p1;
        if (i >= n - 1) {
            break;
        }
        p1 = (struct  student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", &p1->name, &p1->grade_1, &p1->grade_2, &p1->a, &p1->b, &p1->paper);
        p1->sum = 0;
        p1->flag = 0;
        if (p1->grade_1 > 80 && p1->paper > 0)
            p1->sum += 8000;
        if (p1->grade_1 > 85 && p1->grade_2 > 80)
            p1->sum += 4000;
        if (p1->grade_1 > 90)
            p1->sum += 2000;
        if (p1->grade_1 > 85 && p1->b == 'Y')
            p1->sum += 1000;
        if (p1->grade_2 > 80 && p1->a == 'Y')
            p1->sum += 850;
    }
    p2->next = NULL;
    return (head);
}

void output (struct  student *p) {
    int total;
    int i, max;
    struct  student *tmp;
    tmp = p;
    max = 0;
    total = 0;
    tmp = p;
    while (tmp != NULL) {
        total += tmp->sum;
        if (tmp->flag == 1) {
            tmp = tmp->next;
            continue;
        }
        if (max < tmp->sum) {
            max = tmp->sum;
        }
        tmp = tmp->next;
    }
    tmp = p;
    while (tmp != NULL) {
        if (tmp->flag == 1) {
            tmp = tmp->next;
            continue;
        }
        if (max != tmp->sum) {
            tmp = tmp->next;
        }
        else {
            tmp->flag = 1;
            break;
        }
    }
    if (tmp->flag == 1)
        printf ("%s\n", tmp->name);
    printf ("%d\n%d", max, total);
}

int main () {
    scanf ("%d", &n);
    struct  student *p = creat ();
    output (p);
}

