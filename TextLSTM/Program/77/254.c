char str [100];
int len;
int num [100];
int paixu [100];

void search (char b, char g) {
    int i = 0, n = 0;
    for (n = 0; n < len; n++) {
        if (str[n] == g) {
            if (str[n - 1] == b) {
                paixu[num[n]] = num[n - 1];
                i = n - 1;
                for (; i <= len; i++) {
                    str[i] = str[i + 2];
                }
                i = n - 1;
                for (; i <= len; i++) {
                    num[i] = num[i + 2];
                }
            }
        }
    }
    if (str[0] != '\0') {
        search (b, g);
    }
}

int main () {
    char b, g, str1 [100];
    cin.getline (str, 100);
    b = str[0];
    int i;
    len = strlen (str);
    for (i = 0; i < len; i++) {
        num[i] = i;
    }
    for (i = 1; str[i] == str[0]; i++)
        ;
    g = str[i];
    for (i = 0; i < len; i++) {
        str1[i] = str[i];
    }
    search (b, g);
    for (i = 0; i < len; i++) {
        if (str1[i] == g) {
            cout << paixu[i] << " " << i << endl;
        }
    }
    return 0;
}

