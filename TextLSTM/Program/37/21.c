int main () {
    int t;
    scanf ("%d", &t);
    int i, j, k, len;
    char zfc [100000];
    for (i = 0; i < t; i++) {
        int NUM = 0, num;
        scanf ("%s", &zfc);
        len = strlen (zfc);
        for (j = 0; j < len; j++) {
            num = 0;
            for (k = 0; k < len; k++) {
                if (j == k)
                    continue;
                else {
                    if (zfc[j] != zfc[k])
                        num++;
                }
            }
            if (num == len - 1) {
                printf ("%c\n", zfc[j]);
                break;
            }
            else {
                NUM++;
            }
        }
        if (NUM == len)
            printf ("no");
    }
    scanf ("%d", &t);
    return 0;
}

