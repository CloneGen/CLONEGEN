int main () {
    int judge (char ch []);
    char str [501], sub [501];
    int len, start, end, i, l;
    gets (str);
    len = strlen (str);
    for (l = 2; l <= len; l++) {
        for (start = 0, end = start + l; end <= len; start++, end++) {
            for (i = start; i < end; i++) {
                sub[i - start] = str[i];
            }
            sub[end - start] = '\0';
            if (judge (sub) == 1) {
                puts (sub);
                printf ("\n");
            }
        }
    }
    return 0;
}

int judge (char ch []) {
    int begin, finish, lenth;
    lenth = strlen (ch);
    for (begin = 0, finish = lenth - 1; begin < finish; begin++, finish--) {
        if (ch[begin] != ch[finish]) {
            return (0);
        }
    }
    return (1);
}

