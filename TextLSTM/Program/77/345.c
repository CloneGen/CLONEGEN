int main () {
    char bra [100];
    void together (char bra [100]);
    cin.getline (bra, 101, '\n');
    together (bra);
    return 0;
}

void together (char bra [100]) {
    int len;
    char ch;
    ch = bra[0];
    int k = 0, i, j, s;
    int bg [50] [2];
    len = strlen (bra);
    for (i = 1; i < len; i++)
        if (bra[i] != ch) {
            s = 1;
            for (j = i - 1; j >= 0; j--) {
                if (bra[j] != ch)
                    s++;
                else
                    s--;
                if (s == 0) {
                    bg[k][0] = j;
                    bg[k][1] = i;
                    k++;
                    break;
                }
            }
        }
    for (i = 0; i < k; i++)
        cout << bg[i][0] << " " << bg[i][1] << endl;
}

