main () {
    int n, t, input [2] [1000], i, j, k, win, money;
    for (;;) {
        win = 0;
        scanf ("%d", &n);
        if (0 == n)
            break;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < n; j++) {
                scanf ("%d", &input[i][j]);
            }
        }
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (input[1][i] < input[1][j]) {
                    t = input[1][i];
                    input[1][i] = input[1][j];
                    input[1][j] = t;
                }
                if (input[0][i] < input[0][j]) {
                    t = input[0][i];
                    input[0][i] = input[0][j];
                    input[0][j] = t;
                }
            }
        }
        while (n > 0) {
            if (input[0][n - 1] > input[1][n - 1]) {
                win++;
                n--;
            }
            else if (input[0][n - 1] < input[1][n - 1]) {
                win--;
                for (i = 0; i < n - 1; i++)
                    input[1][i] = input[1][i + 1];
                n--;
            }
            else {
                if (input[0][0] < input[1][0]) {
                    win--;
                    for (i = 0; i < n - 1; i++)
                        input[1][i] = input[1][i + 1];
                    n--;
                }
                else if (input[0][0] > input[1][0]) {
                    win++;
                    for (i = 0; i < n - 1; i++) {
                        input[0][i] = input[0][i + 1];
                        input[1][i] = input[1][i + 1];
                    }
                    n--;
                }
                else {
                    if (input[0][n - 1] < input[1][0]) {
                        win--;
                        for (i = 0; i < n - 1; i++)
                            input[1][i] = input[1][i + 1];
                        n--;
                    }
                    else {
                        n--;
                    }
                }
            }
        }
        money = win * 200;
        printf ("%d\n", money);
    }
}

