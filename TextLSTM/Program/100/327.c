int main () {
    char a [300], w [55] = "abcdefghijklmnopqrstuvwxyz";
    int i, n [27];
    scanf ("%s", a);
    for (i = 1; i < 27; i++) {
        n[i] = 0;
    }
    for (i = 0; i < strlen (a); i++) {
        if (a[i] == 'a') {
            n[1]++;
        }
        if (a[i] == 'b') {
            n[2]++;
        }
        if (a[i] == 'c') {
            n[3]++;
        }
        if (a[i] == 'd') {
            n[4]++;
        }
        if (a[i] == 'e') {
            n[5]++;
        }
        if (a[i] == 'f') {
            n[6]++;
        }
        if (a[i] == 'g') {
            n[7]++;
        }
        if (a[i] == 'h') {
            n[8]++;
        }
        if (a[i] == 'i') {
            n[9]++;
        }
        if (a[i] == 'j') {
            n[10]++;
        }
        if (a[i] == 'k') {
            n[11]++;
        }
        if (a[i] == 'l') {
            n[12]++;
        }
        if (a[i] == 'm') {
            n[13]++;
        }
        if (a[i] == 'n') {
            n[14]++;
        }
        if (a[i] == 'o') {
            n[15]++;
        }
        if (a[i] == 'p') {
            n[16]++;
        }
        if (a[i] == 'q') {
            n[17]++;
        }
        if (a[i] == 'r') {
            n[18]++;
        }
        if (a[i] == 's') {
            n[19]++;
        }
        if (a[i] == 't') {
            n[20]++;
        }
        if (a[i] == 'u') {
            n[21]++;
        }
        if (a[i] == 'v') {
            n[22]++;
        }
        if (a[i] == 'w') {
            n[23]++;
        }
        if (a[i] == 'x') {
            n[24]++;
        }
        if (a[i] == 'y') {
            n[25]++;
        }
        if (a[i] == 'z') {
            n[26]++;
        }
    }
    int flag = 0;
    for (i = 1; i <= 26; i++) {
        if (n[i] >= 1) {
            printf ("%c=%d", w[i - 1], n[i]);
            printf ("\n");
            flag = 1;
        }
    }
    if (flag == 0) {
        printf ("No\n");
    }
    return 0;
}

