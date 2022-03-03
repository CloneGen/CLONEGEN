struct  student {
    char info [100];
    struct  student *pre;
};
struct  student *creat () {
    struct  student *head, *p1, *p2;
    head = (struct  student *) malloc (sizeof (struct  student));
    p1 = head;
    head->pre = 0;
    while (1) {
        gets (p1->info);
        if (p1->info[0] == 'e') {
            return p1->pre;
        }
        else {
            p2 = (struct  student *) malloc (sizeof (struct  student));
            p2->pre = p1;
            p1 = p2;
        }
    }
}

int main () {
    struct  student *p;
    p = creat ();
    while (p != 0) {
        printf ("%s\n", p->info);
        p = p->pre;
    }
    return 0;
}

