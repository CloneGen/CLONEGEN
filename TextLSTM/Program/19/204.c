char res [nMax];
char map [nMax] [nMax];
char src [nMax];
char dst [nMax];

int main () {
    gets (res);
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < strlen (res); i++) {
        if (res[i] == ' ') {
            j = 0;
            k++;
        }
        else {
            map[k][j] = res[i];
            j++;
        }
    }
    map[k][j] = '\0';
    scanf ("%s%s", src, dst);
    for (i = 0; i <= k; i++) {
        if (strcmp (map[i], src) == 0) {
            printf ("%s", dst);
        }
        else
            printf ("%s", map[i]);
        if (i != k)
            printf (" ");
    }
    printf ("\n");
    return 0;
}

