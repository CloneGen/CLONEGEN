int len;
void ishui (char a []);

int main () {
    char a [500];
    memset (a, ' ', sizeof (a));
    int i = 0;
    while ((a[i] = cin.get ()) != '\n') {
        i++;
    }
    len = i;
    ishui (a);
    return 0;
}

void ishui (char a []) {
    int i, j, k, l, flag;
    for (i = 2; i <= len - 1; i++) {
        for (j = 0; j < len; j++) {
            flag = 1;
            for (k = 0; k < i; k++) {
                if (a[j + k] != a[j + i - (k + 1)]) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                for (l = 0; l < k; l++) {
                    cout << a[j + l];
                }
                cout << endl;
            }
        }
    }
    return;
}

