char str [500], huiwen [500];

void main () {
    int i, j, m, leng;
    int f (int, int);
    scanf ("%s", str);
    for (leng = 2; leng < strlen (str); leng++) {
        for (i = 0; i < strlen (str); i++) {
            if (f (i, i + leng - 1) == 1)
                printf ("%s\n", huiwen);
        }
    }
}

int f (int i, int j) {
    int flag = 0, k = 0;
    char s1 [500], s2 [500];
    for (k = 0; k <= j - i; k++) {
        s1[k] = str[i + k];
        s2[k] = str[j - k];
        if (s1[k] == s2[k])
            flag = flag;
        else
            flag = flag + 1;
    }
    if (flag == 0) {
        for (k = 0; k <= j - i; k++) {
            huiwen[k] = s1[k];
        }
        return 1;
    }
    else
        return 0;
}

