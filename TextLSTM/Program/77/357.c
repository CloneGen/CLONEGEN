char str [200], u, v;
int n, t [100] [2];

void disassemble (int x) {
    int i, m = 0;
    for (i = 0; i < 2 * n; i++) {
        if (str[i] == v) {
            m = i;
            t[x][1] = m;
            str[m] = 1;
            break;
        }
    }
    for (i = m - 1; i >= 0; i--) {
        if (str[i] == u) {
            t[x][0] = i;
            str[i] = 1;
            break;
        }
    }
    if (x != 1)
        disassemble (x - 1);
    cout << t[n + 1 - x][0] << ' ' << t[n + 1 - x][1] << endl;
}

int main () {
    cin.getline (str, 200, '\n');
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    n = i / 2;
    u = str[0];
    v = str[i - 1];
    disassemble (n);
    return 0;
}

