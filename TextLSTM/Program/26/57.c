int main () {
    char *p, a [101];
    int flag = 0;
    cin.getline (a, 100);
    p = a;
    while (*p != '\0') {
        if ((*p >= 65 && *p <= 90) || (*p >= 97 && *p <= 122)) {
            flag = 1;
            cout << *p;
        }
        else {
            if (flag == 1) {
                flag = 0;
                cout << *p;
            }
            else {
                p++;
                continue;
            }
        }
        p++;
    }
    return 0;
}

