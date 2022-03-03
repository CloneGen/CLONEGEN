int g_a;
int g_Matrix [100] [100];
int Operation (int);
void lineDel (int);
void rowDel (int);
void Transform (int);

void lineDel (int times) {
    int i, j, min, post;
    for (i = 1; i <= times; i++) {
        min = g_Matrix[i][1];
        post = 1;
        for (j = 1; j <= times; j++) {
            if (g_Matrix[i][j] < min) {
                min = g_Matrix[i][j];
                post = j;
            }
        }
        g_Matrix[0][j] = 0;
        for (j = 1; j <= times; j++)
            g_Matrix[i][j] -= min;
    }
}

void rowDel (int times) {
    int i, j, min, post;
    for (j = 1; j <= times; j++) {
        if (g_Matrix[0][j]) {
            min = g_Matrix[1][j];
            post = 1;
            for (i = 1; i <= times; i++) {
                if (g_Matrix[i][j] < min) {
                    min = g_Matrix[i][j];
                    post = i;
                }
            }
            for (i = 1; i <= times; i++)
                g_Matrix[i][j] -= min;
        }
    }
}

void Transform (int times) {
    int i, j;
    for (i = 1; i <= times; i++) {
        for (j = 1; j <= times; j++) {
            if (i == 1 && j > 1)
                g_Matrix[i][j] = g_Matrix[i][j + 1];
            if (j == 1 && i > 1)
                g_Matrix[i][j] = g_Matrix[i + 1][j];
            if (i > 1 && j > 1)
                g_Matrix[i][j] = g_Matrix[i + 1][j + 1];
        }
    }
}

int Operation (int times) {
    int j, num;
    if (times != 1) {
        for (j = 1; j <= times; j++)
            g_Matrix[0][j] = 1;
        lineDel (times);
        rowDel (times);
        num = g_Matrix[2][2];
        Transform (times - 1);
        return num + Operation (times - 1);
    }
    else
        return 0;
}

int main () {
    int n, i, j;
    cin >> n;
    g_a = n;
    while (n--) {
        for (i = 1; i <= g_a; i++)
            for (j = 1; j <= g_a; j++)
                cin >> g_Matrix[i][j];
        cout << Operation (g_a) << endl;
    }
    return 0;
}

