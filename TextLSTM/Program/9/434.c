int main () {
    struct  Patient {
        int flag;
        char id [10];
        int age;
    };
    struct  Patient p [100], p2 [100], temp;
    int n, i, t = 0, k, j;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s %d", &p[i].id, &p[i].age);
        p[i].flag = 0;
        if (p[i].age >= 60) {
            t = t + 1;
            p[i].flag = 1;
        }
        p2[i] = p[i];
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++)
            if (p[j].age < p[j + 1].age) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
    }
    for (i = 0; i < t; i++) {
        printf ("%s\n", p[i].id);
    }
    for (i = 0; i < n; i++) {
        if (p2[i].flag == 0)
            printf ("%s\n", p2[i].id);
    }
    return 0;
}

