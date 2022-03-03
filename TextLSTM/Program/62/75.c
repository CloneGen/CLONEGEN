void del (char str [100]) {
    char *p = str;
    int count;
    for (; *p != '\0'; p++) {
        if (*p == ' ' && *(p + 1) == ' ') {
            char *q, temp;
            count = 0;
            for (q = p + 1; *(q + 1) != '\0'; q++) {
                temp = *q;
                *q = *(q + 1);
                *(q + 1) = temp;
                count++;
            }
            *(p + 1 + count) = '\0';
            p = p - 1;
        }
    }
    cout << str;
}

int main () {
    char str [100];
    cin.getline (str, 100);
    del (str);
    return 0;
}

