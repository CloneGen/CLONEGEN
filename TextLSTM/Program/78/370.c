int main () {
    int wei [4];
    for (wei[0] = 1; wei[0] <= 5; wei[0]++)
        for (wei[1] = 1; wei[1] <= 5; wei[1]++)
            for (wei[2] = 1; wei[2] <= 5; wei[2]++)
                for (wei[3] = 1; wei[3] <= 5; wei[3]++) {
                    int x [3];
                    x[0] = (wei[0] + wei[1]) == (wei[2] + wei[3]);
                    x[1] = (wei[0] + wei[3]) > (wei[2] + wei[1]);
                    x[2] = (wei[0] + wei[2]) < wei[1];
                    if (x[0] + x[1] + x[2] == 3) {
                        char c [4] [4];
                        c[0][0] = 'z';
                        c[1][0] = 'q';
                        c[2][0] = 's';
                        c[3][0] = 'l';
                        for (int i = 0;
                        i < 4; i++) {
                            c[i][1] = ' ';
                            c[i][2] = wei[i] + '0';
                            c[i][3] = '0';
                        }
                        for (int j = 0;
                        j < 3; j++) {
                            for (int k = 0;
                            k < 3 - j; k++) {
                                if (wei[k] < wei[k + 1]) {
                                    int p;
                                    char q [4];
                                    p = wei[k];
                                    wei[k] = wei[k + 1];
                                    wei[k + 1] = p;
                                    for (int y = 0;
                                    y < 4; y++) {
                                        q[y] = c[k][y];
                                        c[k][y] = c[k + 1][y];
                                        c[k + 1][y] = q[y];
                                    }
                                }
                                else
                                    ;
                            }
                        }
                        for (int m = 0;
                        m < 4; m++) {
                            for (int n = 0;
                            n < 4; n++)
                                cout << c[m][n];
                            cout << endl;
                        }
                    }
                    else
                        ;
                }
    return 0;
}

