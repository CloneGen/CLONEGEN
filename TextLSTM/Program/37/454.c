int main () {
    int count [26];
    char s [100000];
    int n;
    scanf ("%d\n", &n);
    while (n > 0) {
        int i;
        for (i = 0; i < 26; i++)
            count[i] = 0;
        gets (s);
        i = 0;
        while (s[i] != '\0') {
            count[s[i] - 'a']++;
            i++;
        }
        int flag = 0;
        i = 0;
        while (s[i] != '\0') {
            if (count[s[i] - 'a'] == 1) {
                printf ("%c\n", s[i]);
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0) {
            printf ("no\n");
        }
        n--;
    }
    return 0;
}

