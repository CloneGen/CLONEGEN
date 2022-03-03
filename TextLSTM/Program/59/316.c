char map [102] [102];
int queue [2] [128 * 100 + 100 + 1], num [2];

int main () {
    int i, j, N, m, sum;
    memset (map, '#', sizeof (map));
    scanf ("%d", &N);
    for (i = 1; i <= N; i++) {
        scanf ("%s", &map[i][1]);
        for (j = 1; j <= N; j++)
            if (map[i][j] == '@')
                queue[0][num[0]++] = (i << 7) + j;
        map[i][j] = '#';
    }
    scanf ("%d", &m);
    sum = num[0];
    for (j = 0; j < m - 1; j++) {
        int tmp = j & 1;
        for (i = 0; i < num[tmp]; i++) {
            int x, y;
            x = queue[tmp][i] >> 7;
            y = queue[tmp][i] & 127;
            INFECT (x - 1, y, !tmp);
            INFECT (x + 1, y, !tmp);
            INFECT (x, y - 1, !tmp);
            INFECT (x, y + 1, !tmp);
        }
        num[tmp] = 0;
        sum += num[!tmp];
    }
    printf ("%d\n", sum);
    return 0;
}

