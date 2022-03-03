int main () {
    int n;
    char ch [510];
    cin >> n;
    cin >> ch;
    int len = strlen (ch);
    char *p, *q;
    int cnt, num = 0;
    int big = 0, howmany = 0;
    char *choice [510];
    for (int i = 0;
    i <= len - n; i++) {
        num = 0;
        for (int j = i;
        j <= len - n; j++) {
            cnt = 0;
            p = &ch[i];
            q = &ch[j];
            for (int k = 0;
            k < n; k++) {
                if (*p++ == *q++)
                    cnt++;
            }
            if (cnt == n)
                num++;
        }
        if (num > big) {
            big = num;
            howmany = 0;
            choice[howmany] = p - n;
        }
        else if (num == big) {
            howmany++;
            choice[howmany] = p - n;
        }
    }
    if (big == 1)
        cout << "NO";
    else {
        cout << big << endl;
        for (int l = 0;
        l <= howmany; l++) {
            for (int y = 0;
            y < n; y++)
                cout << *choice[l]++;
            cout << endl;
        }
    }
    return 0;
}

