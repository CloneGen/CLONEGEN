int main () {
    char word [501];
    cin.getline (word, sizeof (word));
    int slen = strlen (word);
    int len = 2, pos = 0, num1, num2, i;
    char *p = NULL, *q = NULL;
    for (len = 2; len <= slen; len++) {
        if (num1 == 0 && num2 == 0)
            break;
        if (len % 2 == 0)
            num2 = 0;
        else
            num1 = 0;
        for (pos = 0; pos <= slen - len; pos++) {
            p = word + pos;
            q = word + pos + len - 1;
            do {
                if (*q != *p)
                    break;
                else {
                    p++;
                    q--;
                }
            }
            while (q > p);
            if (q <= p) {
                for (i = 0; i < len; i++)
                    cout << word[pos + i];
                cout << endl;
                if (len % 2 == 0)
                    num2++;
                else
                    num1++;
            }
        }
    }
    return 0;
}

