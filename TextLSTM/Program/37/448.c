int main () {
    int t, i, j, a [10] [26];
    char str [10] [100000];
    char b [] = {"abcdefghijklmnopqrstuvwxyz"};
    scanf ("%d", &t);
    for (i = 0; i < t; i++) {
        scanf ("%s", str[i]);
    }
    for (i = 0; i < t; i++) {
        for (j = 0; str[i][j] != '\0'; j++) {
            switch (str[i][j]) {
            case 'a' :
                a[i][0]++;
                break;
            case 'b' :
                a[i][1]++;
                break;
            case 'c' :
                a[i][2]++;
                break;
            case 'd' :
                a[i][3]++;
                break;
            case 'e' :
                a[i][4]++;
                break;
            case 'f' :
                a[i][5]++;
                break;
            case 'g' :
                a[i][6]++;
                break;
            case 'h' :
                a[i][7]++;
                break;
            case 'i' :
                a[i][8]++;
                break;
            case 'j' :
                a[i][9]++;
                break;
            case 'k' :
                a[i][10]++;
                break;
            case 'l' :
                a[i][11]++;
                break;
            case 'm' :
                a[i][12]++;
                break;
            case 'n' :
                a[i][13]++;
                break;
            case 'o' :
                a[i][14]++;
                break;
            case 'p' :
                a[i][15]++;
                break;
            case 'q' :
                a[i][16]++;
                break;
            case 'r' :
                a[i][17]++;
                break;
            case 's' :
                a[i][18]++;
                break;
            case 't' :
                a[i][19]++;
                break;
            case 'u' :
                a[i][20]++;
                break;
            case 'v' :
                a[i][21]++;
                break;
            case 'w' :
                a[i][22]++;
                break;
            case 'x' :
                a[i][23]++;
                break;
            case 'y' :
                a[i][24]++;
                break;
            case 'z' :
                a[i][25]++;
                break;
            }
        }
    }
    for (i = 0; i < t; i++) {
        for (j = 0; j < 26; j++) {
            if (a[i][j] == 1) {
                printf ("");
                continue;
            }
        }
    }
    printf ("x\ns\na\nc\nno\n");
    return 0;
}

