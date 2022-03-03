int bacnum (int x, int y, int day, int bacteria [9] [9]) {
    int temp = 0;
    if (day == 0)
        return bacteria[x][y];
    temp = temp + 2 * bacnum (x, y, day - 1, bacteria);
    if (x > 0 && y > 0)
        temp = temp + bacnum (x - 1, y - 1, day - 1, bacteria);
    if (x > 0 && y < 8)
        temp = temp + bacnum (x - 1, y + 1, day - 1, bacteria);
    if (x < 8 && y > 0)
        temp = temp + bacnum (x + 1, y - 1, day - 1, bacteria);
    if (x < 8 && y < 8)
        temp = temp + bacnum (x + 1, y + 1, day - 1, bacteria);
    if (x > 0)
        temp = temp + bacnum (x - 1, y, day - 1, bacteria);
    if (x < 8)
        temp = temp + bacnum (x + 1, y, day - 1, bacteria);
    if (y > 0)
        temp = temp + bacnum (x, y - 1, day - 1, bacteria);
    if (y < 8)
        temp = temp + bacnum (x, y + 1, day - 1, bacteria);
    return temp;
}

int main () {
    int bacteria [9] [9], day, i, j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            bacteria[i][j] = 0;
    cin >> bacteria[4][4] >> day;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            cout << bacnum (i, j, day, bacteria);
            if (j < 8)
                cout << " ";
            else
                cout << endl;
        }
    }
    return 0;
}

