struct  stu {
    char inf [50];
    struct  stu *next;
}
a [500];

int main () {
    int sum = 0, i = 0, j;
    while (gets (a[i].inf) != NULL) {
        i++;
    }
    for (j = i - 2; j >= 0; j--) {
        puts (a[j].inf);
    }
    return 0;
}

