int freq [26];

int main () {
    char s [300];
    int len;
    int num = 0;
    char index, e;
    int mark = 0;
    scanf ("%s", s);
    len = strlen (s);
    for (int i = 0;
    i < len; i++) {
        if ((s[i] <= 'z') && (s[i] >= 'a')) {
            index = s[i] - 'a';
            freq[index]++;
        }
    }
    for (num = 0; num < 26; num++) {
        if (freq[num] > 0) {
            e = num + 'a';
            printf ("%c=%d\n", e, freq[num]);
            mark = 1;
        }
    }
    if (mark == 0)
        printf ("No");
    return 0;
}

