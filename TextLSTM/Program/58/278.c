int main () {
    int n, num, panduan [100], flag, i, j;
    char ch [100] [81], huiche [1];
    cin >> n;
    cin.getline (huiche, 1, '\n');
    for (i = 0; i < n; i++)
        cin.getline (ch[i], 81, '\n');
    for (i = 0; i < n; i++) {
        num = 0;
        flag = 0;
        for (j = 0; j < 81; j++) {
            if (ch[i][j] != '\0')
                num = num + 1;
            else
                break;
        };
        if ((ch[i][0] == '_' || (65 <= ch[i][0] && ch[i][0] <= 90) || (97 <= ch[i][0] && ch[i][0] <= 122)) == 0)
            panduan[i] = 0;
        else {
            for (j = 1; j < num; j++) {
                if (ch[i][j] == '_' || (65 <= ch[i][j] && ch[i][j] <= 90) || (97 <= ch[i][j] && ch[i][j] <= 122) || (48 <= ch[i][j] && ch[i][j] <= 57))
                    flag = flag + 1;
            };
            if (flag == num - 1)
                panduan[i] = 1;
            else
                panduan[i] = 0;
        };
    };
    for (i = 0; i < n; i++)
        cout << panduan[i] << endl;
    return 0;
};

