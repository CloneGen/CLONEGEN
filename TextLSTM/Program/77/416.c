int len;
char str [1001];
char boy, girl;
void operate ();

int main () {
    cin >> str;
    boy = str[0];
    int i;
    len = strlen (str);
    for (i = 1;; i++)
        if (str[i] != boy) {
            girl = str[i];
            break;
        }
    operate ();
    return 0;
}

void operate () {
    int i, j;
    for (i = 0; i <= len - 2; i++) {
        if (str[i] == boy) {
            for (j = i + 1; j <= len - 1; j++) {
                if (str[j] == ' ')
                    continue;
                else if (str[j] == girl) {
                    cout << i << " " << j << endl;
                    str[i] = ' ';
                    str[j] = ' ';
                    operate ();
                }
                else
                    break;
            }
        }
    }
}

