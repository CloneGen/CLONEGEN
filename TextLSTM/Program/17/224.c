char b [110];
char a [110];

int opr (int i) {
    int j;
    for (j = i - 1; j >= 0; j--) {
        if (b[j] == '$') {
            b[j] = ' ';
            b[i] = ' ';
            break;
        }
    }
    return 0;
}

void tag (char *a, char *b) {
    int l = strlen (a);
    int i;
    for (i = 0; i < l; i++) {
        if (a[i] == '(')
            b[i] = '$';
        else if (a[i] == ')')
            b[i] = '?';
        else
            b[i] = ' ';
    }
    b[l] = '\0';
}

int main () {
    int i, l;
    while (scanf ("%s", a) != EOF) {
        l = strlen (a);
        printf ("%s\n", a);
        tag (a, b);
        for (i = 0; i < l; i++) {
            if (b[i] == '?') {
                opr (i);
            }
        }
        printf ("%s\n", b);
    }
    return 0;
}

