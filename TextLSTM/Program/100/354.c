void main () {
    char s [300], a [300];
    gets (s);
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++)
        a[i] = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 97) {
            a[1]++;
            count++;
        }
        if (s[i] == 98) {
            a[2]++;
            count++;
        }
        if (s[i] == 99) {
            a[3]++;
            count++;
        }
        if (s[i] == 100) {
            a[4]++;
            count++;
        }
        if (s[i] == 101) {
            a[5]++;
            count++;
        }
        if (s[i] == 102) {
            a[6]++;
            count++;
        }
        if (s[i] == 103) {
            a[7]++;
            count++;
        }
        if (s[i] == 104) {
            a[8]++;
            count++;
        }
        if (s[i] == 105) {
            a[9]++;
            count++;
        }
        if (s[i] == 106) {
            a[10]++;
            count++;
        }
        if (s[i] == 107) {
            a[11]++;
            count++;
        }
        if (s[i] == 108) {
            a[12]++;
            count++;
        }
        if (s[i] == 109) {
            a[13]++;
            count++;
        }
        if (s[i] == 110) {
            a[14]++;
            count++;
        }
        if (s[i] == 111) {
            a[15]++;
            count++;
        }
        if (s[i] == 112) {
            a[16]++;
            count++;
        }
        if (s[i] == 113) {
            a[17]++;
            count++;
        }
        if (s[i] == 114) {
            a[18]++;
            count++;
        }
        if (s[i] == 115) {
            a[19]++;
            count++;
        }
        if (s[i] == 116) {
            a[20]++;
            count++;
        }
        if (s[i] == 117) {
            a[21]++;
            count++;
        }
        if (s[i] == 118) {
            a[22]++;
            count++;
        }
        if (s[i] == 119) {
            a[23]++;
            count++;
        }
        if (s[i] == 120) {
            a[24]++;
            count++;
        }
        if (s[i] == 121) {
            a[25]++;
            count++;
        }
        if (s[i] == 122) {
            a[26]++;
            count++;
        }
    }
    if (count == 0)
        printf ("No");
    for (i = 1; i <= 26; i++)
        if (a[i] != 0)
            printf ("%c=%d\n", i + 96, a[i]);
}

