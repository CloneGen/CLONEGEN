int main () {
    int i, b = 0;
    char a [30] = {0};
    gets (a);
    for (i = 0; i < 30; i++) {
        if (b == 0 && a[i] < 48 && a[i] > 57) {
            continue;
        }
        else if (a[i] >= 48 && a[i] <= 57) {
            printf ("%c", a[i]);
            b = b + 1;
        }
        if (b >= 1 && a[i] != '0' && a[i] != '1' && a[i] != '2' && a[i] != '3' && a[i] != '4' && a[i] != '5' && a[i] != '6' && a[i] != '7' && a[i] != '8' && a[i] != '9') {
            printf ("\n");
            b = 0;
        }
    }
    return 0;
}

