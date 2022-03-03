int check (char x) {
    if (x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' || x == '7' || x == '8' || x == '9' || x == '0') {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    char cha [30];
    char chaa [30] [30];
    gets (cha);
    int i = 0, j = 0, k = 0, chec;
    char *pi;
    pi = cha;
    for (; *pi != '\0'; pi++) {
        chec = check (*pi);
        if (chec == 1) {
            chaa[i][j] = *pi;
            j += 1;
        }
        else if (chec == 0) {
            chaa[i][j] = '\0';
            j = 0;
            i += 1;
        }
    }
    chaa[i][j] = '\0';
    for (k = 0; k <= i; k++) {
        if (check (chaa[k][0]) == 1) {
            printf ("%s\n", chaa[k]);
        }
    }
    return 0;
}

