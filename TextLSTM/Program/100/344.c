int main () {
    char str [300];
    int word [27];
    int i, S = 0;
    scanf ("%s", str);
    for (i = 0; i < 27; i++) {
        word[i] = 0;
    }
    for (i = 0; i < strlen (str); i++) {
        if (str[i] == 'a') {
            word[1]++;
        }
        if (str[i] == 'b') {
            word[2]++;
        }
        if (str[i] == 'c') {
            word[3]++;
        }
        if (str[i] == 'd') {
            word[4]++;
        }
        if (str[i] == 'e') {
            word[5]++;
        }
        if (str[i] == 'f') {
            word[6]++;
        }
        if (str[i] == 'g') {
            word[7]++;
        }
        if (str[i] == 'h') {
            word[8]++;
        }
        if (str[i] == 'i') {
            word[9]++;
        }
        if (str[i] == 'j') {
            word[10]++;
        }
        if (str[i] == 'k') {
            word[11]++;
        }
        if (str[i] == 'l') {
            word[12]++;
        }
        if (str[i] == 'm') {
            word[13]++;
        }
        if (str[i] == 'n') {
            word[14]++;
        }
        if (str[i] == 'o') {
            word[15]++;
        }
        if (str[i] == 'p') {
            word[16]++;
        }
        if (str[i] == 'q') {
            word[17]++;
        }
        if (str[i] == 'r') {
            word[18]++;
        }
        if (str[i] == 's') {
            word[19]++;
        }
        if (str[i] == 't') {
            word[20]++;
        }
        if (str[i] == 'u') {
            word[21]++;
        }
        if (str[i] == 'v') {
            word[22]++;
        }
        if (str[i] == 'w') {
            word[23]++;
        }
        if (str[i] == 'x') {
            word[24]++;
        }
        if (str[i] == 'y') {
            word[25]++;
        }
        if (str[i] == 'z') {
            word[26]++;
        }
    }
    for (i = 1; i < 27; i++) {
        S += word[i];
    }
    if (S == 0) {
        printf ("No\n");
    }
    if (word[1] != 0) {
        printf ("a=%d\n", word[1]);
    }
    if (word[2] != 0) {
        printf ("b=%d\n", word[2]);
    }
    if (word[3] != 0) {
        printf ("c=%d\n", word[3]);
    }
    if (word[4] != 0) {
        printf ("d=%d\n", word[4]);
    }
    if (word[5] != 0) {
        printf ("e=%d\n", word[5]);
    }
    if (word[6] != 0) {
        printf ("f=%d\n", word[6]);
    }
    if (word[7] != 0) {
        printf ("g=%d\n", word[7]);
    }
    if (word[8] != 0) {
        printf ("h=%d\n", word[8]);
    }
    if (word[9] != 0) {
        printf ("i=%d\n", word[9]);
    }
    if (word[10] != 0) {
        printf ("j=%d\n", word[10]);
    }
    if (word[11] != 0) {
        printf ("k=%d\n", word[11]);
    }
    if (word[12] != 0) {
        printf ("l=%d\n", word[12]);
    }
    if (word[13] != 0) {
        printf ("m=%d\n", word[13]);
    }
    if (word[14] != 0) {
        printf ("n=%d\n", word[14]);
    }
    if (word[15] != 0) {
        printf ("o=%d\n", word[15]);
    }
    if (word[16] != 0) {
        printf ("p=%d\n", word[16]);
    }
    if (word[17] != 0) {
        printf ("q=%d\n", word[17]);
    }
    if (word[18] != 0) {
        printf ("r=%d\n", word[18]);
    }
    if (word[19] != 0) {
        printf ("s=%d\n", word[19]);
    }
    if (word[20] != 0) {
        printf ("t=%d\n", word[20]);
    }
    if (word[21] != 0) {
        printf ("u=%d\n", word[21]);
    }
    if (word[22] != 0) {
        printf ("v=%d\n", word[22]);
    }
    if (word[23] != 0) {
        printf ("w=%d\n", word[23]);
    }
    if (word[24] != 0) {
        printf ("x=%d\n", word[24]);
    }
    if (word[25] != 0) {
        printf ("y=%d\n", word[25]);
    }
    if (word[26] != 0) {
        printf ("z=%d\n", word[26]);
    }
    return 0;
}

