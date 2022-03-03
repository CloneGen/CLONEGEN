int len, step;
int num [102];
void move (int *p, int n);

int main () {
    memset (num, 0, sizeof (num));
    cin >> len >> step;
    int i;
    for (i = 0; i <= len - 1; i++)
        cin >> *(num + i);
    move (num, step);
    for (i = 0; i <= len - 1; i++) {
        if (i != 0)
            cout << " ";
        cout << *(num + i);
    }
    return 0;
}

void move (int *p, int n) {
    if (n == 0)
        return;
    int temp = *(p + len - 1);
    int i;
    for (i = len - 1; i >= 1; i--)
        *(p + i) = *(p + i - 1);
    *p = temp;
    move (p, n - 1);
}

