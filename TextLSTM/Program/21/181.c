void main () {
    int num, n [300], max, min, x, y, i;
    float av = 0;
    scanf ("%d", &num);
    for (i = 0; i < num; i++) {
        scanf ("%d", &n[i]);
        av += n[i];
    }
    max = n[0];
    x = 1;
    av /= num;
    for (i = 1; i < num; i++) {
        if (n[i] > max) {
            max = n[i];
            x = 1;
        }
        else {
            if (n[i] == max)
                x++;
        }
    }
    min = n[0];
    y = 1;
    for (i = 1; i < num; i++) {
        if (n[i] < min) {
            min = n[i];
            y = 1;
        }
        else {
            if (min == n[i])
                y++;
        }
    }
    if (min == max) {
        printf ("%d", max);
        for (i = 1; i < x; i++)
            printf (",%d", max);
    }
    else {
        if ((max + min) == (2 * av)) {
            printf ("%d", min);
            for (i = 1; i < y; i++)
                printf (",%d", min);
            for (i = 0; i < x; i++)
                printf (",%d", max);
        }
        else {
            if ((max + min) > (av * 2)) {
                printf ("%d", max);
                for (i = 1; i < x; i++)
                    printf (",%d", max);
            }
            else {
                printf ("%d", min);
                for (i = 1; i < y; i++)
                    printf (",%d", min);
            }
        }
    }
}

