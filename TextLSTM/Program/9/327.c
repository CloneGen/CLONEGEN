int main () {
    int num, i, j, l;
    scanf ("%d", &num);
    struct  inf {
        char str [10];
        int age;
    }
    infs [101];
    struct  f {
        char *p1;
        int m1;
    }
    old [101];
    for (i = 0; i < num; i++) {
        scanf ("%s %d", infs[i].str, &infs[i].age);
    }
    for (i = 0, j = 0; i < num; i++)
        if (infs[i].age >= 60) {
            old[j].m1 = infs[i].age;
            old[j].p1 = infs[i].str;
            j++;
        }
    int end = j;
    char *k;
    for (i = 0; i < end - 1; i++) {
        for (j = 0; j + 1 < end - i; j++)
            if (old[j].m1 < old[j + 1].m1) {
                l = old[j].m1;
                old[j].m1 = old[j + 1].m1;
                old[j + 1].m1 = l;
                k = old[j].p1;
                old[j].p1 = old[1 + j].p1;
                old[1 + j].p1 = k;
            }
    }
    for (i = 0; i < end; i++)
        printf ("%s\n", old[i].p1);
    for (i = 0; i < num; i++)
        if (infs[i].age < 60)
            printf ("%s\n", infs[i].str);
}

