int main () {
    int i, j;
    char num1 [N], num2 [N], tmp;
    int len1, len2, len_max, len_min;
    int result [N +1] = {0};
    scanf ("%s%s", num1, num2);
    len1 = strlen (num1);
    len2 = strlen (num2);
    len_max = len1 > len2 ? len1 : len2;
    len_min = len1 < len2 ? len1 : len2;
    for (j = 0; j < len1 / 2; j++) {
        tmp = num1[j];
        num1[j] = num1[len1 - 1 - j];
        num1[len1 - 1 - j] = tmp;
    }
    for (j = 0; j < len2 / 2; j++) {
        tmp = num2[j];
        num2[j] = num2[len2 - 1 - j];
        num2[len2 - 1 - j] = tmp;
    }
    for (j = 0; j < len_min; j++) {
        result[j] += num1[j] + num2[j] - '0' - '0';
        if (result[j] >= 10) {
            result[j + 1] += 1;
            result[j] = result[j] % 10;
        }
    }
    for (j = len_min; j < len_max; j++) {
        if (len_max == len1) {
            result[j] += num1[j] - '0';
            if (result[j] >= 10) {
                result[j + 1] += 1;
                result[j] = result[j] % 10;
            }
        }
        else {
            result[j] += num2[j] - '0';
            if (result[j] >= 10) {
                result[j + 1] += 1;
                result[j] = result[j] % 10;
            }
        }
    }
    if (result[len_max] == 1)
        len_max++;
    for (i = len_max - 1; i >= 0; i--) {
        if (result[i] != 0)
            break;
    }
    if (i >= 0) {
        for (j = i; j >= 0; j--)
            printf ("%d", result[j]);
        printf ("\n");
    }
    else
        printf ("0\n");
    return 0;
}

