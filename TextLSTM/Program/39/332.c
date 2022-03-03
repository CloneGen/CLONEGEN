struct  student {
    char name [21];
    int final;
    int cla;
    char stu;
    char west;
    int paper;
    int sch;
};
int award (struct  student *p) {
    int total = 0;
    if (p->final > 80 && p->paper > 0)
        total += 8000;
    if (p->final > 85 && p->cla > 80)
        total += 4000;
    if (p->final > 90)
        total += 2000;
    if (p->final > 85 && p->west == 'Y')
        total += 1000;
    if (p->cla > 80 && p->stu == 'Y')
        total += 850;
    return total;
}

int main () {
    int n, i, j;
    long int all = 0;
    struct  student s [100], *p [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s %d %d %c %c %d", &s[i].name, &s[i].final, &s[i].cla, &s[i].stu, &s[i].west, &s[i].paper);
        p[i] = &s[i];
        s[i].sch = award (p[i]);
        all += s[i].sch;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[j].sch > s[i].sch) {
                struct  student temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf ("%s\n%d\n%ld", s[0].name, s[0].sch, all);
    return 0;
}

