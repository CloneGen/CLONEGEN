int len;
void palindrome (char [], int);

void palindrome (char p [], int lenth) {
    int j, k, final, judge;
    final = lenth / 2;
    for (j = 0; j <= len - lenth; j++) {
        judge = 0;
        for (k = 1; k <= final; k++) {
            if (p[j + k - 1] != p[j + lenth - k]) {
                judge = 1;
                break;
            }
        }
        if (judge == 0) {
            for (k = j; k <= j + lenth - 1; k++)
                cout << p[k];
            cout << endl;
        }
    }
}

int main () {
    char a [501];
    int i;
    cin >> a;
    len = strlen (a);
    for (i = 2; i <= len; i++)
        palindrome (a, i);
    return 0;
}

