int main () {
    int i, l, num [100] = {0};
    char str [100];
    gets (str);
    l = strlen (str);
    for (i = 0; i < l; i++) {
        if ((str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a')) && (str[i] != '.') && (str[i] != ','))
            num[i] = num[i]++;
    }
    for (i = 0; i < l; i++) {
        if (num[i] == 0)
            cout << str[i];
        else if (num[i] == 1 && num[i + 1] == 0)
            cout << str[i];
        else if (num[i] == 1 && num[i + 1] == 1)
            continue;
    }
    return 0;
}

