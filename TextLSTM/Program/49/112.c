void search ();
void check (char same []);
char str [500];
int lenstr;

int main () {
    cin >> str;
    lenstr = strlen (str);
    search ();
}

void search () {
    int i, j, len, t;
    for (len = 2; len <= lenstr; len = len + 2) {
        for (i = 0; i <= lenstr - len; i++) {
            char spr [500];
            for (j = i, t = 0; j <= i + len - 1; j++, t++)
                spr[t] = str[j];
            spr[j] = '\0';
            check (spr);
        }
    }
}

void check (char same [500]) {
    int lensame;
    lensame = strlen (same);
    int i, flag = 1;
    for (i = 0; i <= lensame / 2 - 1; i++) {
        if (same[lensame - 1 - i] != same[i]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        for (i = 0; same[i] != '\0'; i++)
            cout << same[i];
        cout << endl;
    }
}

