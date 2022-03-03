int main () {
    char str [100], temp [100];
    char *p = str, *q = temp;
    int flag;
    cin.getline (p, 100);
    while (1) {
        if (*p <= 57 && *p >= 48) {
            *q = *p;
            q++;
            flag = 1;
        }
        else if (flag == 1) {
            flag = 0;
            *q = 0;
            q = temp;
            cout << q << endl;
        }
        if (*p == 0)
            break;
        p++;
    }
    return 0;
}

