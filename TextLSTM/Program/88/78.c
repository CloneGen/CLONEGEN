int main () {
    char sen [31], *p = NULL;
    int flag = 0, len;
    cin.getline (sen, 31);
    len = strlen (sen);
    for (p = sen; p < sen + len; p++) {
        if (*p >= '0' && *p <= '9') {
            cout << *p;
            flag = 1;
        }
        if ((*p < '0' || *p > '9') && flag == 1) {
            cout << endl;
            flag = 0;
        }
    }
    return 0;
}

