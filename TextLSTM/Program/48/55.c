int b [9] [9], old [9] [9];
void mul (int k, const  int day);
void pam (int x, int y);

int main () {
    int m, n, i, j;
    memset (b, 0, sizeof (b));
    cin >> m >> n;
    b[4][4] = m;
    mul (0, n);
    for (i = 0; i <= 8; i++) {
        for (j = 0; j < 8; j++)
            cout << b[i][j] << " ";
        cout << b[i][8] << endl;
    }
    return 0;
}

void mul (int k, const  int day) {
    int i, j;
    for (i = 4 - k; i <= 4 + k; i++)
        for (j = 4 - k; j <= 4 + k; j++)
            old[i][j] = b[i][j];
    for (i = 4 - k; i <= 4 + k; i++)
        for (j = 4 - k; j <= 4 + k; j++)
            pam (i, j);
    k++;
    if (k < day)
        mul (k, day);
    else
        return;
}

void pam (int x, int y) {
    int i, j;
    for (i = x - 1; i <= x + 1; i++)
        for (j = y - 1; j <= y + 1; j++)
            b[i][j] = b[i][j] + old[x][y];
    return;
}

