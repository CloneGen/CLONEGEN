int n;

struct  student {
    char name [100];
    int num;
    struct  student *next;
};
struct  student *creat (void) {
    struct  student *head;
    struct  student *p1, *p2;
    int i;
    p1 = p2 = (struct  student *) malloc (LEN);
    head = p1;
    for (i = 0; i < n; i++) {
        p1 = (struct  student *) malloc (LEN);
        p2->next = p1;
        p2 = p1;
        scanf ("%d %s", &p1->num, p1->name);
    }
    p2->next = NULL;
    return (head);
}

void list (struct  student *head) {
    struct  student *p1, *p2, *p3, *p4;
    int i, j, t, a [100] = {0}, b [100];
    char str [100];
    p1 = head->next;
    for (i = 0; i < n; i++) {
        strcpy (str, p1->name);
        for (j = 0; j < strlen (str); j++) {
            if (str[j] >= 'A' && str[j] <= 'Z') {
                a[str[j] - 65]++;
            }
        }
        p1 = p1->next;
    }
    for (i = 0; i < 26; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < 26 - 1; i++) {
        for (j = 0; j < 26 - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < 26; i++) {
        if (b[i] == a[0]) {
            printf ("%c\n%d\n", i + 65, a[0]);
            t = i;
        }
    }
    p1 = head->next;
    for (i = 0; i < n; i++) {
        strcpy (str, p1->name);
        for (j = 0; j < strlen (str); j++) {
            if (str[j] == t + 65) {
                printf ("%d\n", p1->num);
            }
        }
        p1 = p1->next;
    }
}

int main () {
    struct  student *p;
    scanf ("%d", &n);
    p = creat ();
    list (p);
}

