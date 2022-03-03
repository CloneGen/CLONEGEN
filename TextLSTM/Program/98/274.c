int main () {
    int n;
    char ch [1000] [41];
    int len [1000];
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> ch[i];
        len[i] = strlen (ch[i]);
    }
    char *p;
    int num = 0, cnt = 0;
    while (1) {
        if (cnt >= n)
            break;
        while (num + len[cnt] <= 80) {
            p = ch[cnt];
            if (cnt >= n)
                break;
            cout << p;
            num += len[cnt];
            cnt++;
            if (num + len[cnt] < 80 && cnt < n) {
                num++;
                cout << " ";
            }
            else {
                cout << endl;
                num = 0;
            }
        }
    }
    return 0;
}

