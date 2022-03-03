int main () {
    int num [6] [6] = {0}, maxLine [6] = {0}, minRow [6] = {0}, i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++)
            cin >> num[i][j];
    }
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (num[i][j] >= num[i][1] && num[i][j] >= num[i][2] && num[i][j] >= num[i][3] && num[i][j] >= num[i][4] && num[i][j] >= num[i][5])
                maxLine[i] = j;
        }
    }
    for (j = 1; j <= 5; j++) {
        for (i = 1; i <= 5; i++) {
            if (num[i][j] <= num[1][j] && num[i][j] <= num[2][j] && num[i][j] <= num[3][j] && num[i][j] <= num[4][j] && num[i][j] <= num[5][j])
                minRow[j] = i;
        }
    }
    int counter = 0;
    for (i = 1; i <= 5; i++) {
        if (i == minRow[maxLine[i]]) {
            counter++;
            cout << i << " " << maxLine[i] << " " << num[i][maxLine[i]] << endl;
        }
    }
    if (counter == 0)
        cout << "not found";
    return 0;
}

