char s [1000];

int main () {
    int T, i;
    scanf ("%d", &T);
    while (T--) {
        scanf ("%s", s);
        for (i = 0; s[i]; i++) {
            if (s[i] == 'A') {
                putchar ('T');
            }
            if (s[i] == 'T') {
                putchar ('A');
            }
            if (s[i] == 'G') {
                putchar ('C');
            }
            if (s[i] == 'C') {
                putchar ('G');
            }
        }
        puts ("");
    }
}

