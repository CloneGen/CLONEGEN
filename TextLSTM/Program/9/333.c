struct  xinxi {
    char id [10];
    int age;
};
struct  xinxi old [100];

void main () {
    int i, n, j;
    int maxage = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s %d", old[i].id, &old[i].age);
    }
    for (i = 0; i < n; i++)
        if (maxage < old[i].age)
            maxage = old[i].age;
    for (j = maxage; j >= 60; j--)
        for (i = 0; i < n; i++)
            if (old[i].age == j)
                puts (old[i].id);
    for (i = 0; i < n; i++)
        if (old[i].age < 60)
            puts (old[i].id);
}

