void main () {
    char str [100], str2 [100] [100];
    int i, j, k, n = 0, min, max, minno, maxno, len [100];
    gets (str);
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == 32)
            n++;
    n++;
    i = 0;
    for (j = 0; j < n; j++) {
        if (str[i] == '\0') {
            break;
            i++;
        }
        else {
            for (k = 0;; k++) {
                if (str[i] == 32 || str[i] == '\0') {
                    i++;
                    break;
                }
                str2[j][k] = str[i];
                i++;
            }
        }
    }
    for (i = 0; i < n; i++)
        len[i] = strlen (str2[i]);
    min = max = len[0];
    for (i = 0; i < n; i++) {
        max = max > len[i] ? max : len[i];
        min = min < len[i] ? min : len[i];
    }
    for (i = n - 1; i >= 0; i--) {
        if (max == len[i])
            maxno = i;
        if (min == len[i])
            minno = i;
    }
    for (j = 0; str2[maxno][j] != '\0'; j++)
        printf ("%c", str2[maxno][j]);
    printf ("\n");
    for (j = 0; str2[minno][j] != '\0'; j++)
        printf ("%c", str2[minno][j]);
}

