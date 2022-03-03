int main () {
    char s [502];
    int max, frequency [251], n, i, j;
    scanf ("%d", &n);
    scanf ("%s", s);
    max = 1;
    if (n == 2) {
        for (i = 0; i < strlen (s) - 2; i++) {
            frequency[i] = 1;
            for (j = i + 1; j < strlen (s) - 1; j++) {
                if (s[i] == s[j] && s[i + 1] == s[j + 1])
                    frequency[i]++;
            }
            if (max < frequency[i])
                max = frequency[i];
        }
        if (max == 1)
            printf ("NO\n");
        else {
            printf ("%d\n", max);
            for (i = 0; i < strlen (s) - 2; i++) {
                if (frequency[i] == max)
                    printf ("%c%c\n", s[i], s[i + 1]);
            }
        }
    }
    if (n == 3) {
        for (i = 0; i < strlen (s) - 3; i++) {
            frequency[i] = 1;
            for (j = i + 1; j < strlen (s) - 2; j++) {
                if (s[i] == s[j] && s[i + 1] == s[j + 1] && s[i + 2] == s[j + 2])
                    frequency[i]++;
            }
            if (max < frequency[i])
                max = frequency[i];
        }
        if (max == 1)
            printf ("NO\n");
        else {
            printf ("%d\n", max);
            for (i = 0; i < strlen (s) - 3; i++) {
                if (frequency[i] == max)
                    printf ("%c%c%c\n", s[i], s[i + 1], s[i + 2]);
            }
        }
    }
    if (n == 4) {
        for (i = 0; i < strlen (s) - 4; i++) {
            frequency[i] = 1;
            for (j = i + 1; j < strlen (s) - 3; j++) {
                if (s[i] == s[j] && s[i + 1] == s[j + 1] && s[i + 2] == s[j + 2] && s[i + 3] == s[j + 3])
                    frequency[i]++;
            }
            if (max < frequency[i])
                max = frequency[i];
        }
        if (max == 1)
            printf ("NO\n");
        else {
            printf ("%d\n", max);
            for (i = 0; i < strlen (s) - 4; i++) {
                if (frequency[i] == max)
                    printf ("%c%c%c%c\n", s[i], s[i + 1], s[i + 2], s[i + 3]);
            }
        }
    }
    return 0;
}

