int main () {
    char a [80], b [80];
    int i;
    gets (a);
    gets (b);
    for (i = 0; a[i]; i++) {
        if (a[i] == 'a')
            a[i] = 'A';
        if (a[i] == 'b')
            a[i] = 'B';
        if (a[i] == 'c')
            a[i] = 'C';
        if (a[i] == 'd')
            a[i] = 'D';
        if (a[i] == 'e')
            a[i] = 'E';
        if (a[i] == 'f')
            a[i] = 'F';
        if (a[i] == 'g')
            a[i] = 'G';
        if (a[i] == 'h')
            a[i] = 'H';
        if (a[i] == 'i')
            a[i] = 'I';
        if (a[i] == 'j')
            a[i] = 'J';
        if (a[i] == 'k')
            a[i] = 'K';
        if (a[i] == 'l')
            a[i] = 'L';
        if (a[i] == 'm')
            a[i] = 'M';
        if (a[i] == 'n')
            a[i] = 'N';
        if (a[i] == 'o')
            a[i] = 'O';
        if (a[i] == 'p')
            a[i] = 'P';
        if (a[i] == 'q')
            a[i] = 'Q';
        if (a[i] == 'r')
            a[i] = 'R';
        if (a[i] == 's')
            a[i] = 'S';
        if (a[i] == 't')
            a[i] = 'T';
        if (a[i] == 'u')
            a[i] = 'U';
        if (a[i] == 'v')
            a[i] = 'V';
        if (a[i] == 'w')
            a[i] = 'W';
        if (a[i] == 'x')
            a[i] = 'X';
        if (a[i] == 'y')
            a[i] = 'Y';
        if (a[i] == 'z')
            a[i] = 'Z';
    }
    for (i = 0; b[i]; i++) {
        if (b[i] == 'a')
            b[i] = 'A';
        if (b[i] == 'b')
            b[i] = 'B';
        if (b[i] == 'c')
            b[i] = 'C';
        if (b[i] == 'd')
            b[i] = 'D';
        if (b[i] == 'e')
            b[i] = 'E';
        if (b[i] == 'f')
            b[i] = 'F';
        if (b[i] == 'g')
            b[i] = 'G';
        if (b[i] == 'h')
            b[i] = 'H';
        if (b[i] == 'i')
            b[i] = 'I';
        if (b[i] == 'j')
            b[i] = 'J';
        if (b[i] == 'k')
            b[i] = 'K';
        if (b[i] == 'l')
            b[i] = 'L';
        if (b[i] == 'm')
            b[i] = 'M';
        if (b[i] == 'n')
            b[i] = 'N';
        if (b[i] == 'o')
            b[i] = 'O';
        if (b[i] == 'p')
            b[i] = 'P';
        if (b[i] == 'q')
            b[i] = 'Q';
        if (b[i] == 'r')
            b[i] = 'R';
        if (b[i] == 's')
            b[i] = 'S';
        if (b[i] == 't')
            b[i] = 'T';
        if (b[i] == 'u')
            b[i] = 'U';
        if (b[i] == 'v')
            b[i] = 'V';
        if (b[i] == 'w')
            b[i] = 'W';
        if (b[i] == 'x')
            b[i] = 'X';
        if (b[i] == 'y')
            b[i] = 'Y';
        if (b[i] == 'z')
            b[i] = 'Z';
    }
    for (i = 0; i < 80; i++) {
        if (a[i] < b[i]) {
            printf ("<");
            break;
        }
        else if (a[i] > b[i]) {
            printf (">");
            break;
        }
        else if (a[i] == '\0') {
            printf ("=");
            break;
        }
    }
    return 0;
}

