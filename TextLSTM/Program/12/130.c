int main () {
    int a [16], i, j, num, flag;
    while (1) {
        flag = 0;
        i = 0;
        scanf ("%d", &a[i]);
        if (a[0] == -1)
            break;
        else {
            do {
                i++;
                scanf ("%d", &a[i]);
            }
            while (a[i] != 0);
            num = i;
            for (i = 0; i < num; i++)
                for (j = i + 1; j < num; j++)
                    if ((a[i] == 2 * a[j]) || (a[j] == 2 * a[i]))
                        flag++;
            printf ("%d\n", flag);
        }
    }
    return 0;
}

