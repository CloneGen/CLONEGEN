int g_pos = 38;
void Pow (int [], int);

int main () {
    int n;
    cin >> n;
    int num [40] = {0};
    num[38] = 1;
    Pow (num, n);
    for (int j = g_pos;
    j < 39; j++)
        cout << num[j];
    cout << endl;
    return 0;
}

void Pow (int num [], int n) {
    int i;
    if (n == 0)
        return;
    for (i = 39; i >= g_pos; i--) {
        num[i - 1] = num[i - 1] * 2 + num[i] / 10;
        num[i] %= 10;
    }
    g_pos = 0;
    while (num[g_pos] == 0)
        g_pos++;
    Pow (num, n - 1);
}

