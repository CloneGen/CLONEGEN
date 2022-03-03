int main () {
    int n;
    scanf ("%d", &n);
    char str [Maxlength +2];
    scanf ("%s", str);
    int len = strlen (str);
    int number [len - n + 1];
    for (int i = 0;
    i < len - n + 1; i++) {
        number[i] = 1;
        int t = 1;
        while (t <= (len - n - i)) {
            for (int j = 0;
            j < n; j++) {
                if (*(str + i + j) != *(str + i + j + t)) {
                    t++;
                    break;
                }
                else if (j == (n - 1) && *(str + i + j) == *(str + i + j + t)) {
                    t++;
                    number[i]++;
                }
            }
        }
    }
    int maxtimes = 1;
    for (int j = 1;
    j <= (len - n + 1); j++) {
        if (maxtimes != 1) {
            break;
        }
        for (int i = 0;
        i < len - n + 1; i++) {
            if (j < number[i]) {
                break;
            }
            if (i == len - n) {
                for (int k = 0;
                k < len - n + 1; k++) {
                    if (j == number[k]) {
                        maxtimes = j;
                        break;
                    }
                }
            }
        }
    }
    if (maxtimes == 1) {
        printf ("NO\n");
    }
    else {
        printf ("%d\n", maxtimes);
        for (int i = 0;
        i < len - n + 1; i++) {
            if (maxtimes == number[i]) {
                for (int j = 0;
                j < n; j++) {
                    printf ("%c", *(str + i + j));
                }
                printf ("\n");
            }
        }
    }
    return 1;
}

