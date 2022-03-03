int main () {
    int n;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        int numa [101], numb [101];
        char stra [101], strb [101];
        int lena, lenb;
        cin >> stra;
        cin >> strb;
        lena = strlen (stra);
        lenb = strlen (strb);
        memset (numa, 0, sizeof (numa));
        memset (numb, 0, sizeof (numb));
        int j = 0, k = 0;
        for (k = lena - 1; k >= 0; k--) {
            numa[j++] = stra[k] - '0';
        }
        j = 0;
        for (k = lenb - 1; k >= 0; k--) {
            numb[j++] = strb[k] - '0';
        }
        for (k = 0; k < lena; k++) {
            if (numa[k] < numb[k]) {
                numa[k] = numa[k] + 10;
                numa[k + 1] = numa[k + 1] - 1;
            }
            numb[k] = numa[k] - numb[k];
        }
        k = lena;
        while (numb[k] == 0)
            k--;
        for (; k >= 0; k--)
            cout << numb[k];
        cout << endl;
        cin.get ();
    }
    return 0;
}

