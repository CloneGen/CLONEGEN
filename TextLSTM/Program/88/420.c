int main () {
    char a [31], *q;
    int i, j, k, len;
    cin.getline (a, 31);
    len = strlen (a);
    q = a;
    k = 0;
    for (j = 0; j < len; j++) {
        if ((*q >= '0') && (*q <= '9')) {
            cout << *q;
            k = 0;
        }
        else if (k == 0) {
            cout << endl;
            k = 1;
        }
        q++;
    }
    return 0;
}

