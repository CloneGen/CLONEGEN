int main () {
    char a [101], sub [101], c [101];
    cin.getline (a, 101);
    cin >> sub;
    cin >> c;
    int la, ls, i, j, flag;
    la = strlen (a);
    ls = strlen (sub);
    for (i = 0; i <= la - ls; i++) {
        if (i != 0 && a[i - 1] != ' ') {
            cout << a[i];
            continue;
        }
        flag = 1;
        for (j = 0; j < ls; j++) {
            if (a[j + i] != sub[j]) {
                flag = 0;
                cout << a[i];
                break;
            }
        }
        if (flag) {
            cout << c;
            i = i + ls - 1;
        }
    }
    for (j = 0; j < ls; j++) {
        flag = 1;
        if (a[j + la - ls] != sub[j]) {
            flag = 0;
            break;
        }
    }
    if (flag == 0 || a[la - ls - 1] != ' ') {
        for (i = la - ls + 1; i < la; i++)
            cout << a[i];
    }
    return 0;
}

