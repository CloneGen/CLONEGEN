int total (int year, int mouth, int day);

int main () {
    int k;
    int p, q;
    int year, mouth, day;
    int sum = 0;
    scanf ("%d %d %d", &year, &mouth, &day);
    sum += year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    p = total (year, mouth, day);
    q = p + sum;
    if (q % 7 == 0) {
        printf ("Sun.\n");
    }
    if (q % 7 == 1) {
        printf ("Mon.\n");
    }
    if (q % 7 == 2) {
        printf ("Tue.\n");
    }
    if (q % 7 == 3) {
        printf ("Wed.\n");
    }
    if (q % 7 == 4) {
        printf ("Thu.\n");
    }
    if (q % 7 == 5) {
        printf ("Fri.\n");
    }
    if (q % 7 == 6) {
        printf ("Sat.\n");
    }
    return 0;
}

int total (int year, int mouth, int day) {
    int j = 0;
    for (int i = 1;
    i < mouth; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            j += 31;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11) {
            j += 30;
        }
        else if (i == 2) {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                j += 29;
            }
            else {
                j += 28;
            }
        }
    }
    j += day;
    return j;
}

