int main () {
    int n, i, t, l, t1, t2;
    cin >> n;
    char str [100];
    cin.getline (str, 100);
    while (n > 0) {
        t = 0;
        t1 = 0;
        t2 = 1;
        cin.getline (str, 100);
        l = strlen (str);
        if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || (str[0] == '_'))
            t1 = 1;
        for (i = 1; i < l; i++) {
            if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '_') || (str[i] >= '0' && str[i] <= '9')))
                t2 = 0;
        }
        if (t1 == 1 && t2 == 1)
            t = 1;
        cout << t << endl;
        n--;
    }
    return 0;
}

