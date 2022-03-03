struct  student {
    char name [30];
    int qimo, banji;
    char ganbu, xibu;
    int lunwen;
    int money;
};
int suan (struct  student *s) {
    int mon = 0;
    if (s->qimo > 80 && s->lunwen >= 1)
        mon += 8000;
    if (s->qimo > 85 && s->banji > 80)
        mon += 4000;
    if (s->qimo > 90)
        mon += 2000;
    if (s->qimo > 85 && s->xibu == 'Y')
        mon += 1000;
    if (s->banji > 80 && s->ganbu == 'Y')
        mon += 850;
    return mon;
}

int main () {
    long int n, sum = 0;
    int i;
    char tmp;
    struct  student *stu, *max;
    scanf ("%d", &n);
    stu = (struct  student *) malloc (sizeof (struct  student) * n);
    for (i = 0; i < n; i++) {
        scanf ("%s%d%d%c%c%c%c%d", stu[i].name, &(stu[i].qimo), &(stu[i].banji), &tmp, &(stu[i].ganbu), &tmp, &(stu[i].xibu), &(stu[i].lunwen));
        stu[i].money = suan (stu + i);
        sum += stu[i].money;
    }
    max = stu + n - 1;
    for (i = n - 1; i > 0; i--)
        if (max->money <= stu[i].money)
            max = stu + i;
    printf ("%s\n%d\n%d\n", max->name, max->money, sum);
}

