int main () {
    char a [30], i;
    for (i = 0; i < 30; i++)
        a[i] = ' ';
    gets (a);
    for (i = 0; i < 30; i++) {
        if (a[i] == 48 || a[i] == 49 || a[i] == 50 || a[i] == 51 || a[i] == 52 || a[i] == 53 || a[i] == 54 || a[i] == 55 || a[i] == 56 || a[i] == 57) {
            printf ("%c", a[i]);
            if (i + 1 < 30 && (a[i + 1] < 48 || a[i + 1] > 57))
                printf ("\n");
        }
    }
    return 0;
}

