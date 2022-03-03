char room [100] [101] = {0};
void infection (int, int);

int main () {
    int n, m, infector = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> room[i];
    cin >> m;
    infection (m, n);
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++)
            if (room[i][j] == '@')
                infector++;
    cout << infector;
    return 0;
}

void infection (int day, int n) {
    if (day > 2)
        infection (day - 1, n);
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++)
            if (room[i][j] == '.')
                if (room[i][j - 1] == '@' || room[i][j + 1] == '@' || room[i - 1][j] == '@' || room[i + 1][j] == '@')
                    room[i][j] = '$';
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++)
            if (room[i][j] == '$')
                room[i][j] = '@';
}

