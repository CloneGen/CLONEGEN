int main () {
    char zfc [301];
    gets (zfc);
    int n = strlen (zfc), c = 0;
    char dx [27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char xx [27] = "abcdefghijklmnopqrstuvwxyz";
    int dxs [26], xxs [26], i;
    for (i = 0; i < 26; i++) {
        dxs[i] = 0;
        xxs[i] = 0;
    }
    char *ps;
    for (ps = zfc; *ps != '\0'; ps++) {
        if (*ps == 'A') {
            dxs[0]++;
            c++;
        }
        if (*ps == 'B') {
            dxs[1]++;
            c++;
        }
        if (*ps == 'C') {
            dxs[2]++;
            c++;
        }
        if (*ps == 'D') {
            dxs[3]++;
            c++;
        }
        if (*ps == 'E') {
            dxs[4]++;
            c++;
        }
        if (*ps == 'F') {
            dxs[5]++;
            c++;
        }
        if (*ps == 'G') {
            dxs[6]++;
            c++;
        }
        if (*ps == 'H') {
            dxs[7]++;
            c++;
        }
        if (*ps == 'I') {
            dxs[8]++;
            c++;
        }
        if (*ps == 'J') {
            dxs[9]++;
            c++;
        }
        if (*ps == 'K') {
            dxs[10]++;
            c++;
        }
        if (*ps == 'L') {
            dxs[11]++;
            c++;
        }
        if (*ps == 'M') {
            dxs[12]++;
            c++;
        }
        if (*ps == 'N') {
            dxs[13]++;
            c++;
        }
        if (*ps == 'O') {
            dxs[14]++;
            c++;
        }
        if (*ps == 'P') {
            dxs[15]++;
            c++;
        }
        if (*ps == 'Q') {
            dxs[16]++;
            c++;
        }
        if (*ps == 'R') {
            dxs[17]++;
            c++;
        }
        if (*ps == 'S') {
            dxs[18]++;
            c++;
        }
        if (*ps == 'T') {
            dxs[19]++;
            c++;
        }
        if (*ps == 'U') {
            dxs[20]++;
            c++;
        }
        if (*ps == 'V') {
            dxs[21]++;
            c++;
        }
        if (*ps == 'W') {
            dxs[22]++;
            c++;
        }
        if (*ps == 'X') {
            dxs[23]++;
            c++;
        }
        if (*ps == 'Y') {
            dxs[24]++;
            c++;
        }
        if (*ps == 'Z') {
            dxs[25]++;
            c++;
        }
        if (*ps == 'a') {
            xxs[0]++;
            c++;
        }
        if (*ps == 'b') {
            xxs[1]++;
            c++;
        }
        if (*ps == 'c') {
            xxs[2]++;
            c++;
        }
        if (*ps == 'd') {
            xxs[3]++;
            c++;
        }
        if (*ps == 'e') {
            xxs[4]++;
            c++;
        }
        if (*ps == 'f') {
            xxs[5]++;
            c++;
        }
        if (*ps == 'g') {
            xxs[6]++;
            c++;
        }
        if (*ps == 'h') {
            xxs[7]++;
            c++;
        }
        if (*ps == 'i') {
            xxs[8]++;
            c++;
        }
        if (*ps == 'j') {
            xxs[9]++;
            c++;
        }
        if (*ps == 'k') {
            xxs[10]++;
            c++;
        }
        if (*ps == 'l') {
            xxs[11]++;
            c++;
        }
        if (*ps == 'm') {
            xxs[12]++;
            c++;
        }
        if (*ps == 'n') {
            xxs[13]++;
            c++;
        }
        if (*ps == 'o') {
            xxs[14]++;
            c++;
        }
        if (*ps == 'p') {
            xxs[15]++;
            c++;
        }
        if (*ps == 'q') {
            xxs[16]++;
            c++;
        }
        if (*ps == 'r') {
            xxs[17]++;
            c++;
        }
        if (*ps == 's') {
            xxs[18]++;
            c++;
        }
        if (*ps == 't') {
            xxs[19]++;
            c++;
        }
        if (*ps == 'u') {
            xxs[20]++;
            c++;
        }
        if (*ps == 'v') {
            xxs[21]++;
            c++;
        }
        if (*ps == 'w') {
            xxs[22]++;
            c++;
        }
        if (*ps == 'x') {
            xxs[23]++;
            c++;
        }
        if (*ps == 'y') {
            xxs[24]++;
            c++;
        }
        if (*ps == 'z') {
            xxs[25]++;
            c++;
        }
    }
    if (dxs[0] != 0) {
        printf ("A=%d\n", dxs[0]);
    }
    if (dxs[1] != 0) {
        printf ("B=%d\n", dxs[1]);
    }
    if (dxs[2] != 0) {
        printf ("C=%d\n", dxs[2]);
    }
    if (dxs[3] != 0) {
        printf ("D=%d\n", dxs[3]);
    }
    if (dxs[4] != 0) {
        printf ("E=%d\n", dxs[4]);
    }
    if (dxs[5] != 0) {
        printf ("F=%d\n", dxs[5]);
    }
    if (dxs[6] != 0) {
        printf ("G=%d\n", dxs[6]);
    }
    if (dxs[7] != 0) {
        printf ("H=%d\n", dxs[7]);
    }
    if (dxs[8] != 0) {
        printf ("I=%d\n", dxs[8]);
    }
    if (dxs[9] != 0) {
        printf ("J=%d\n", dxs[9]);
    }
    if (dxs[10] != 0) {
        printf ("K=%d\n", dxs[10]);
    }
    if (dxs[11] != 0) {
        printf ("L=%d\n", dxs[11]);
    }
    if (dxs[12] != 0) {
        printf ("M=%d\n", dxs[12]);
    }
    if (dxs[13] != 0) {
        printf ("N=%d\n", dxs[13]);
    }
    if (dxs[14] != 0) {
        printf ("O=%d\n", dxs[14]);
    }
    if (dxs[15] != 0) {
        printf ("P=%d\n", dxs[15]);
    }
    if (dxs[16] != 0) {
        printf ("Q=%d\n", dxs[16]);
    }
    if (dxs[17] != 0) {
        printf ("R=%d\n", dxs[17]);
    }
    if (dxs[18] != 0) {
        printf ("S=%d\n", dxs[18]);
    }
    if (dxs[19] != 0) {
        printf ("T=%d\n", dxs[19]);
    }
    if (dxs[20] != 0) {
        printf ("U=%d\n", dxs[20]);
    }
    if (dxs[21] != 0) {
        printf ("V=%d\n", dxs[21]);
    }
    if (dxs[22] != 0) {
        printf ("W=%d\n", dxs[22]);
    }
    if (dxs[23] != 0) {
        printf ("X=%d\n", dxs[23]);
    }
    if (dxs[24] != 0) {
        printf ("Y=%d\n", dxs[24]);
    }
    if (dxs[25] != 0) {
        printf ("Z=%d\n", dxs[25]);
    }
    if (xxs[0] != 0) {
        printf ("a=%d\n", xxs[0]);
    }
    if (xxs[1] != 0) {
        printf ("b=%d\n", xxs[1]);
    }
    if (xxs[2] != 0) {
        printf ("c=%d\n", xxs[2]);
    }
    if (xxs[3] != 0) {
        printf ("d=%d\n", xxs[3]);
    }
    if (xxs[4] != 0) {
        printf ("e=%d\n", xxs[4]);
    }
    if (xxs[5] != 0) {
        printf ("f=%d\n", xxs[5]);
    }
    if (xxs[6] != 0) {
        printf ("g=%d\n", xxs[6]);
    }
    if (xxs[7] != 0) {
        printf ("h=%d\n", xxs[7]);
    }
    if (xxs[8] != 0) {
        printf ("i=%d\n", xxs[8]);
    }
    if (xxs[9] != 0) {
        printf ("j=%d\n", xxs[9]);
    }
    if (xxs[10] != 0) {
        printf ("k=%d\n", xxs[10]);
    }
    if (xxs[11] != 0) {
        printf ("l=%d\n", xxs[11]);
    }
    if (xxs[12] != 0) {
        printf ("m=%d\n", xxs[12]);
    }
    if (xxs[13] != 0) {
        printf ("n=%d\n", xxs[13]);
    }
    if (xxs[14] != 0) {
        printf ("o=%d\n", xxs[14]);
    }
    if (xxs[15] != 0) {
        printf ("p=%d\n", xxs[15]);
    }
    if (xxs[16] != 0) {
        printf ("q=%d\n", xxs[16]);
    }
    if (xxs[17] != 0) {
        printf ("r=%d\n", xxs[17]);
    }
    if (xxs[18] != 0) {
        printf ("s=%d\n", xxs[18]);
    }
    if (xxs[19] != 0) {
        printf ("t=%d\n", xxs[19]);
    }
    if (xxs[20] != 0) {
        printf ("u=%d\n", xxs[20]);
    }
    if (xxs[21] != 0) {
        printf ("v=%d\n", xxs[21]);
    }
    if (xxs[22] != 0) {
        printf ("w=%d\n", xxs[22]);
    }
    if (xxs[23] != 0) {
        printf ("x=%d\n", xxs[23]);
    }
    if (xxs[24] != 0) {
        printf ("y=%d\n", xxs[24]);
    }
    if (xxs[25] != 0) {
        printf ("z=%d\n", xxs[25]);
    }
    if (c == 0) {
        printf ("No");
    }
    return 0;
}

