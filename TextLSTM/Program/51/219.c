int n;

int count1 (char *p, char *P, int geshu) {
    if (geshu == n) {
        if (*p == *P)
            return 1;
        else
            return 0;
    }
    if (*p == *P) {
        if (count1 (p + 1, P +1, geshu + 1))
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

int main () {
    char str [505], *p = NULL;
    int max = 1, cal = 0, num [505], f = 1, len;
    cin >> n;
    cin.get ();
    cin.getline (str, 505);
    len = strlen (str);
    for (p = str; *(p + n - 1) != '\0'; p++) {
        for (int i = 1;
        *(p + i + n - 1) != '\0'; i++)
            f += count1 (p, p + i, 1);
        if (max <= f)
            max = f;
        num[cal] = f;
        f = 1;
        cal++;
    }
    if (max == 1)
        cout << "NO" << endl;
    else {
        cout << max << endl;
        for (int i = 0;
        i < len; i++) {
            p = str + i;
            if (num[i] == max) {
                for (int j = 0;
                j < n; j++)
                    cout << *(p + j);
                cout << endl;
            }
        }
    }
    return 0;
}

