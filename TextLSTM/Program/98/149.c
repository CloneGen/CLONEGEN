int main () {
    char ch [2000] = {0}, *p = &ch[0], *q = NULL, *l = NULL, *k;
    int n, flag = 0;
    cin >> n;
    cin.get ();
    cin.getline (ch, 2000);
    while (*p != 0) {
        flag = 0;
        for (q = p;;) {
            for (l = q; *l != ' ' && *l != 0; l++)
                ;
            l--;
            if (l - p < 80) {
                if (flag == 1) {
                    cout << " ";
                }
                for (k = q; k <= l; k++) {
                    cout << *k;
                    flag = 1;
                }
                q = l + 2;
            }
            else {
                if (l - p != 79) {
                    cout << endl;
                    break;
                }
            };
            if (*(l + 1) == 0) {
                q = l + 2;
                break;
            }
        }
        p = q;
    }
    return 0;
}

