int main () {
    int n;
    char input [501];
    scanf ("%d", &n);
    gets (input);
    gets (input);
    int len = strlen (input);
    int count [501] = {0};
    int i, j, k;
    for (i = 0; i < len; i++) {
        if (i + n > len) {
            break;
        }
        if (count[i] == -1) {
            continue;
        }
        for (j = i + 1; j < len; j++) {
            if (j + n > len) {
                break;
            }
            int equal = 1;
            for (k = 0; k < n; k++) {
                if (input[i + k] != input[j + k]) {
                    equal = 0;
                    break;
                }
            }
            if (equal == 1) {
                count[i]++;
                count[j] = -1;
            }
        }
    }
    int max = -1, max_pos = 0;
    for (i = 0; i < len; i++) {
        if (count[i] > max) {
            max = count[i];
            max_pos = i;
        }
    }
    if (max + 1 <= 1) {
        printf ("NO\n");
        return 0;
    }
    printf ("%d\n", max + 1);
    for (i = 0; i < len; i++) {
        if (count[i] == max) {
            for (j = i; j < i + n; j++) {
                printf ("%c", input[j]);
            }
            printf ("\n");
        }
    }
}

