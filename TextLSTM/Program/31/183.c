struct  stu {
    char information [100];
    struct  stu *next;
    struct  stu *last;
};
struct  stu *creat (void) {
    struct  stu *end, *p1, *p2;
    int flag = 1;
    p1 = (struct  stu *) malloc (Len);
    gets (p1->information);
    if (strcmp (p1->information, "end") == 0) {
        p2 = null;
        flag = 0;
    }
    else {
        p1->last = null;
        do {
            p2 = p1;
            p1 = (struct  stu *) malloc (Len);
            p2->next = p1;
            p1->last = p2;
            gets (p1->information);
            if (strcmp (p1->information, "end") == 0)
                flag = 0;
        }
        while (flag == 1);
    }
    end = p2;
    return end;
}

void printf (struct  stu *end) {
    struct  stu *p;
    p = end;
    while (p != null) {
        printf ("%s\n", p->information);
        p = p->last;
    }
}

int main () {
    struct  stu *move;
    move = creat ();
    printf (move);
}

