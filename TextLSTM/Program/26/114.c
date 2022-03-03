int main () {
    char str [100];
    char *p, *q;
    int flag = 0;
    cin.getline (str, 100);
    for (p = str;; p++) {
        if (*p == ' ' && flag == 1) {
            for (q = p;; q++) {
                *q = *(q + 1);
                if (*q == '\0')
                    break;
            }
            p--;
        }
        if (*p == ' ')
            flag = 1;
        else
            flag = 0;
        if (*p == '\0')
            break;
    }
    cout << str << endl;
    return 0;
}

