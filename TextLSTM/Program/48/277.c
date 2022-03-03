void change (int a, int area [] [11], int area0 [] [11]) {
    int i, j;
    if (a == 0)
        return;
    else {
        for (i = 1; i <= 9; i++) {
            for (j = 1; j <= 9; j++)
                area0[i][j] = area[i][j];
        }
        for (i = 1; i <= 9; i++) {
            for (j = 1; j <= 9; j++) {
                area0[i][j] += area[i][j];
                area0[i - 1][j] += area[i][j];
                area0[i + 1][j] += area[i][j];
                area0[i][j - 1] += area[i][j];
                area0[i][j + 1] += area[i][j];
                area0[i + 1][j + 1] += area[i][j];
                area0[i - 1][j - 1] += area[i][j];
                area0[i + 1][j - 1] += area[i][j];
                area0[i - 1][j + 1] += area[i][j];
            }
        }
        for (i = 1; i <= 9; i++) {
            for (j = 1; j <= 9; j++)
                area[i][j] = area0[i][j];
        }
        change (a - 1, area, area0);
    }
}

int main () {
    int area [11] [11], area0 [11] [11], i, j;
    int num, day;
    cin >> num >> day;
    memset (area, 0, sizeof (area));
    memset (area0, 0, sizeof (area0));
    area[5][5] = num;
    change (day, area, area0);
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            if (j == 1)
                cout << area[i][j];
            else
                cout << " " << area[i][j];
        }
        cout << endl;
    }
    return 0;
}

