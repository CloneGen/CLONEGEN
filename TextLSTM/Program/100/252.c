int main () {
    char s [310];
    int t = 1, d, i, j, k;
    int a [52] = {0};
    gets (s);
    d = strlen (s);
    for (i = 0; i < d; i++) {
        if (isalpha (s[i])) {
            t = 0;
            switch (s[i]) {
            case 'A' :
                a[0] += 1;
                break;
            case 'B' :
                a[1] += 1;
                break;
            case 'C' :
                a[2] += 1;
                break;
            case 'D' :
                a[3] += 1;
                break;
            case 'E' :
                a[4] += 1;
                break;
            case 'F' :
                a[5] += 1;
                break;
            case 'G' :
                a[6] += 1;
                break;
            case 'H' :
                a[7] += 1;
                break;
            case 'I' :
                a[8] += 1;
                break;
            case 'J' :
                a[9] += 1;
                break;
            case 'K' :
                a[10] += 1;
                break;
            case 'L' :
                a[11] += 1;
                break;
            case 'M' :
                a[12] += 1;
                break;
            case 'N' :
                a[13] += 1;
                break;
            case 'O' :
                a[14] += 1;
                break;
            case 'P' :
                a[15] += 1;
                break;
            case 'Q' :
                a[16] += 1;
                break;
            case 'R' :
                a[17] += 1;
                break;
            case 'S' :
                a[18] += 1;
                break;
            case 'T' :
                a[19] += 1;
                break;
            case 'U' :
                a[20] += 1;
                break;
            case 'V' :
                a[21] += 1;
                break;
            case 'W' :
                a[22] += 1;
                break;
            case 'X' :
                a[23] += 1;
                break;
            case 'Y' :
                a[24] += 1;
                break;
            case 'Z' :
                a[25] += 1;
                break;
            case 'a' :
                a[26] += 1;
                break;
            case 'b' :
                a[27] += 1;
                break;
            case 'c' :
                a[28] += 1;
                break;
            case 'd' :
                a[29] += 1;
                break;
            case 'e' :
                a[30] += 1;
                break;
            case 'f' :
                a[31] += 1;
                break;
            case 'g' :
                a[32] += 1;
                break;
            case 'h' :
                a[33] += 1;
                break;
            case 'i' :
                a[34] += 1;
                break;
            case 'j' :
                a[35] += 1;
                break;
            case 'k' :
                a[36] += 1;
                break;
            case 'l' :
                a[37] += 1;
                break;
            case 'm' :
                a[38] += 1;
                break;
            case 'n' :
                a[39] += 1;
                break;
            case 'o' :
                a[40] += 1;
                break;
            case 'p' :
                a[41] += 1;
                break;
            case 'q' :
                a[42] += 1;
                break;
            case 'r' :
                a[43] += 1;
                break;
            case 's' :
                a[44] += 1;
                break;
            case 't' :
                a[45] += 1;
                break;
            case 'u' :
                a[46] += 1;
                break;
            case 'v' :
                a[47] += 1;
                break;
            case 'w' :
                a[48] += 1;
                break;
            case 'x' :
                a[49] += 1;
                break;
            case 'y' :
                a[50] += 1;
                break;
            case 'z' :
                a[51] += 1;
                break;
            default :
                ;
            }
        }
    }
    if (t) {
        printf ("No");
        return 0;
    }
    for (i = 0; i < 26; i++) {
        if (a[i] != 0)
            printf ("%c=%d\n", 'A' + i, a[i]);
    }
    for (i = 26; i < 52; i++) {
        if (a[i] != 0)
            printf ("%c=%d\n", 'a' + i - 26, a[i]);
    }
    return 0;
}

