int main () {
    char str [100] [100], input [101];
    int i, j, m = 0, k = 0, t = 1;
    char *in, (*p) [100];
    in = input;
    for (i = 0; (*(in++) = getchar ()) != '\n'; i++)
        m++;
    *(in - 1) = '\0';
    in = input;
    p = str;
    for (i = 0; *(in + i) != '\0'; i++)
        if (*(in + i) == ' ')
            t++;
    in = input;
    for (i = 0; i < t; i++) {
        for (j = 0; *in != '\0' && *(in++) != ' '; j++)
            *(*(p + i) + j) = *(in - 1);
        *(*(p + i) + j) = '\0';
        k++;
    }
    p = str;
    for (i = k - 1; i >= 0; i--) {
        if (i == 0)
            printf ("%s", *(p + i));
        else
            printf ("%s ", *(p + i));
    }
    return 0;
}

