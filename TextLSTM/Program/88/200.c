int main () {
    char s [30];
    int i, len, k;
    gets (s);
    len = strlen (s);
    for (i = 0; i < len; i++) {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
            printf ("%c", s[i]);
            k = 0;
        }
        else if (k == 0) {
            printf ("\n");
            k++;
        }
    }
    return 0;
}

