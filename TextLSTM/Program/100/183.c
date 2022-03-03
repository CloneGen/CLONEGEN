int main () {
    int i = 0;
    char a [26] = {0}, b [26] = {0};
    char temp = 0;
    int test = 1;
    for (i = 0; i < 300; i++) {
        temp = getchar ();
        if ('\n' == temp)
            break;
        if (temp >= 'A' && temp <= 'Z') {
            temp = temp - 'A';
            b[(int) temp]++;
        }
        if (temp >= 'a' && temp <= 'z') {
            temp = temp - 'a';
            a[(int) temp]++;
        }
    }
    for (i = 0; i < 26; i++) {
        if (b[i]) {
            printf ("%c=%d\n", ('A' + i), b[i]);
            test = 0;
        }
    }
    for (i = 0; i < 26; i++) {
        if (a[i]) {
            printf ("%c=%d\n", ('a' + i), a[i]);
            test = 0;
        }
    }
    if (test)
        printf ("No\n");
    return 0;
}

