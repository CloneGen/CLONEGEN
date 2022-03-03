int main () {
    char s [100], a [100], b [100], c [100];
    int len1 = 0, len2 = 0, len3 = 0, i, j, n = -1, k, flag;
    cin.getline (s, 101, '\n');
    cin.getline (a, 101, '\n');
    cin.getline (b, 101, '\n');
    for (len1 = 0; s[len1] != '\0'; len1++)
        ;
    for (len2 = 0; a[len2] != '\0'; len2++)
        ;
    for (len3 = 0; b[len3] != '\0'; len3++)
        ;
    for (i = 0; i < len1; i++) {
        flag = 0;
        if (((i != 0) && (s[i] == a[0]) && (s[i - 1] == ' ')) || ((i == 0) && (s[i] == a[0]))) {
            flag = 1;
            for (j = 1; j < len2; j++)
                if (s[i + j] != a[j])
                    flag = 0;
            if (((i + j) != len1) && (s[i + j] != ' '))
                flag = 0;
        }
        if (flag) {
            k = n + 1;
            while (n < k + len3 - 1) {
                n++;
                c[n] = b[n - k];
            }
            i = i + len2 - 1;
        }
        else {
            n++;
            c[n] = s[i];
        }
    }
    for (i = 0; i <= n; i++)
        cout << c[i];
    return 0;
}

