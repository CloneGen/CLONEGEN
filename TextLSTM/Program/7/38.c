int main () {
    char a [260], b [260], c [260];
    char *p, *q, *k;
    cin.getline (a, 260);
    cin.getline (b, 260);
    cin.getline (c, 260);
    int lena = strlen (a), lenb = strlen (b), flag = 0, t = 0, i;
    p = a;
    q = a;
    k = b;
    while (*p != '\0') {
        if (*q == *k) {
            q++;
            k++;
            if (*k == '\0') {
                flag = 1;
                for (i = 0; i < t; i++)
                    cout << a[i];
                cout << c;
                for (i = t + lenb; a[i] != '\0'; i++)
                    cout << a[i];
                cout << endl;
                break;
            }
        }
        else {
            p++;
            q = p;
            k = b;
            t++;
        }
    }
    if (flag == 0)
        cout << a << endl;
    return 0;
}

