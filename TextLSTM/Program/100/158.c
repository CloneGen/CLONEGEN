void main () {
    char s [301], j;
    int i, l, sum1 [26] = {0}, sum2 [26] = {0};
    gets (s);
    l = strlen (s);
    for (i = 0; i < l; i++) {
        switch (s[i]) {
        case 'A' :
            sum1[0]++;
            break;
        case 'B' :
            sum1[1]++;
            break;
        case 'C' :
            sum1[2]++;
            break;
        case 'D' :
            sum1[3]++;
            break;
        case 'E' :
            sum1[4]++;
            break;
        case 'F' :
            sum1[5]++;
            break;
        case 'G' :
            sum1[6]++;
            break;
        case 'H' :
            sum1[7]++;
            break;
        case 'I' :
            sum1[8]++;
            break;
        case 'J' :
            sum1[9]++;
            break;
        case 'K' :
            sum1[10]++;
            break;
        case 'L' :
            sum1[11]++;
            break;
        case 'M' :
            sum1[12]++;
            break;
        case 'N' :
            sum1[13]++;
            break;
        case 'O' :
            sum1[14]++;
            break;
        case 'P' :
            sum1[15]++;
            break;
        case 'Q' :
            sum1[16]++;
            break;
        case 'R' :
            sum1[17]++;
            break;
        case 'S' :
            sum1[18]++;
            break;
        case 'T' :
            sum1[19]++;
            break;
        case 'U' :
            sum1[20]++;
            break;
        case 'V' :
            sum1[21]++;
            break;
        case 'W' :
            sum1[22]++;
            break;
        case 'X' :
            sum1[23]++;
            break;
        case 'Y' :
            sum1[24]++;
            break;
        case 'Z' :
            sum1[25]++;
            break;
        case 'a' :
            sum2[0]++;
            break;
        case 'b' :
            sum2[1]++;
            break;
        case 'c' :
            sum2[2]++;
            break;
        case 'd' :
            sum2[3]++;
            break;
        case 'e' :
            sum2[4]++;
            break;
        case 'f' :
            sum2[5]++;
            break;
        case 'g' :
            sum2[6]++;
            break;
        case 'h' :
            sum2[7]++;
            break;
        case 'i' :
            sum2[8]++;
            break;
        case 'j' :
            sum2[9]++;
            break;
        case 'k' :
            sum2[10]++;
            break;
        case 'l' :
            sum2[11]++;
            break;
        case 'm' :
            sum2[12]++;
            break;
        case 'n' :
            sum2[13]++;
            break;
        case 'o' :
            sum2[14]++;
            break;
        case 'p' :
            sum2[15]++;
            break;
        case 'q' :
            sum2[16]++;
            break;
        case 'r' :
            sum2[17]++;
            break;
        case 's' :
            sum2[18]++;
            break;
        case 't' :
            sum2[19]++;
            break;
        case 'u' :
            sum2[20]++;
            break;
        case 'v' :
            sum2[21]++;
            break;
        case 'w' :
            sum2[22]++;
            break;
        case 'x' :
            sum2[23]++;
            break;
        case 'y' :
            sum2[24]++;
            break;
        case 'z' :
            sum2[25]++;
            break;
        }
    }
    for (j = i = 0; i < 26; j++, i++) {
        if (sum1[i])
            printf ("%c=%d\n", 65 + j, sum1[i]);
    }
    for (j = i = 0; i < 26; j++, i++) {
        if (sum2[i])
            printf ("%c=%d\n", 97 + j, sum2[i]);
    }
    for (i = 0; i < 26; i++)
        if (sum1[i] == 0 && sum2[i] == 0)
            ;
        else
            break;
    if (i == 26)
        printf ("No\n");
}

