struct  student {
    char name [20];
    int finalmarks;
    int classmarks;
    char monitor;
    char west;
    int paper;
}
stu;

void main () {
    int n;
    char bigname [20] = "0";
    int max = 0, temp = 0;
    int sum = 0;
    int i;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        stu.name[20] = "0";
        temp = 0;
        scanf ("%s %d %d %c %c %d", stu.name, &stu.finalmarks, &stu.classmarks, &stu.monitor, &stu.west, &stu.paper);
        if (stu.finalmarks > 80 && stu.paper >= 1)
            temp = temp + 8000;
        if (stu.finalmarks > 85 && stu.classmarks > 80)
            temp = temp + 4000;
        if (stu.finalmarks > 90)
            temp = temp + 2000;
        if (stu.finalmarks > 85 && stu.west == 'Y')
            temp = temp + 1000;
        if (stu.classmarks > 80 && stu.monitor == 'Y')
            temp = temp + 850;
        sum = sum + temp;
        if (max < temp) {
            max = temp;
            strcpy (bigname, stu.name);
        }
    }
    printf ("%s\n", bigname);
    printf ("%d\n", max);
    printf ("%d", sum);
}

