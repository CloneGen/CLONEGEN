int main () {
    int fun (char [], int);
    char alp [501];
    cin >> alp;
    int i, j, k, l;
    l = strlen (alp);
    for (i = 2; i <= l; i = i + 2) {
        for (j = 0; j <= l - i; j++) {
            char str [501];
            for (k = 0; k < i; k++) {
                str[k] = alp[k + j];
            }
            str[i] = '\0';
            if (fun (str, i))
                cout << str << endl;
        }
    }
    return 0;
}

int fun (char str [], int a) {
    int i, flag = 1;
    for (i = 0; i <= a / 2; i++) {
        if (str[i] != str[a - i - 1]) {
            flag = 0;
            return 0;
            break;
        }
    }
    if (flag)
        return 1;
}

