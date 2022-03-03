int main () {
    char sen [101];
    char *p = NULL, *q = NULL;
    int i, num1, len;
    len = 0;
    cin.getline (sen, 101);
    p = sen;
    for (i = 1; *++p != '\0'; i++)
        if (*p == ' ') {
            if (*(p - 1) != ' ')
                num1 = i;
            if (*(p + 1) != ' ') {
                for (q = sen + num1; *(q + i - num1) != '\0'; q++)
                    *q = *(q + i - num1);
                *q = *(q + i - num1);
                p -= i - num1;
                len += i - num1;
                i -= i - num1;
            }
        }
    for (p = sen; p < i + sen; p++)
        cout << *p;
    cout << endl;
    return 0;
}

