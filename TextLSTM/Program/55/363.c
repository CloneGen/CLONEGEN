int main () {
    char n [100];
    int length, ten = 0, i;
    int a, b;
    scanf ("%d", &a);
    scanf ("%s", n);
    scanf ("%d", &b);
    length = strlen (n);
    for (i = 0; i <= length - 1; i++) {
        if (('A' <= n[i]) && (n[i] <= 'Z'))
            n[i] = n[i] - 'A' + 10;
        else if (('a' <= n[i]) && (n[i] <= 'z'))
            n[i] = n[i] - 'a' + 10;
        else if (('0' <= n[i]) && (n[i] <= '9'))
            n[i] = n[i] - '0';
    }
    for (i = 0; i <= length - 1; i++) {
        ten = ten + (int) (n[i] * pow (a, length - i - 1));
    }
    if (ten == 0)
        printf ("%d", ten);
    if (ten != 0) {
        int yushu [100], j;
        for (i = 0; ten != 0; i++) {
            yushu[i] = ten % b;
            ten = ten / b;
        }
        for (j = i - 1; j >= 0; j--) {
            if ((0 <= yushu[j]) && (yushu[j] <= 9))
                printf ("%d", yushu[j]);
            else if (yushu[j] >= 10) {
                yushu[j] = yushu[j] + 'A' - 10;
                printf ("%c", yushu[j]);
            }
        }
    }
    printf ("\n");
    return 0;
}

