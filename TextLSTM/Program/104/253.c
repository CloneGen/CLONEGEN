void main () {
    int x, y, answerx [100] = {0}, answery [100] = {0}, i = 1, j = 1, p, q, temp, r = 0;
    scanf ("%d%d", &x, &y);
    answerx[0] = x;
    answery[0] = y;
    while (x != 1) {
        if (x % 2 == 0) {
            answerx[i] = x / 2;
            i++;
            x = x / 2;
        }
        else {
            answerx[i] = (x - 1) / 2;
            i++;
            x = (x - 1) / 2;
        }
    }
    while (y != 1) {
        if (y % 2 == 0) {
            answery[j] = y / 2;
            j++;
            y = y / 2;
        }
        else {
            answery[j] = (y - 1) / 2;
            j++;
            y = (y - 1) / 2;
        }
    }
    for (p = i - 1; p >= 0; p--) {
        for (q = j - 1; q >= 0; q--) {
            if (answerx[p] == answery[q]) {
                temp = answerx[p];
                r = 1;
                break;
            }
        }
    }
    if (r == 1)
        printf ("%d\n", temp);
    else
        printf ("1\n");
}

