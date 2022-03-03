int len;
void huiwenzichuan (char a []);

int main () {
    char a [500];
    int i = 0;
    while ((a[i] = cin.get ()) != '\n') {
        i++;
    }
    len = i;
    huiwenzichuan (a);
    return 0;
}

void huiwenzichuan (char a []) {
    int i, j, k, flag, m;
    for (i = 2; i < len; i++) {
        for (k = 0; k < len; k++) {
            flag = 1;
            for (j = 0; j < i; j++) {
                if (a[k + j] != a[k + i - j - 1]) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                for (m = k; m < k + j; m++)
                    cout << a[m];
                cout << endl;
            }
        }
    }
    return;
}

