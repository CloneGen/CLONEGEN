int main () {
    char sen [1000];
    char *p = NULL;
    p = sen;
    int s [1000] = {0};
    int *q = NULL;
    q = s;
    cin.getline (sen, 1000);
    int l = strlen (sen);
    for (int i = 0;
    i < l; i++) {
        if (*(p + i) == ' ') {
            if (*(p + i + 1) == ' ')
                *(q + i + 1) = 1;
        }
    }
    for (int j = 0;
    j < l; j++) {
        if (*(q + j) == 0)
            cout << *(p + j);
    }
    return 0;
}

