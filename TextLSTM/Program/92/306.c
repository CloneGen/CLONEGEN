main () {
    int a, b, t, i, j, j1, j2, k = 0, m1, m2, q1, q2, q, n [100], tj [100] [1000], qw [100] [1000];
    for (i = 0;; i++) {
        scanf ("%d", &n[i]);
        if (n[i] == 0)
            break;
        else {
            for (j = 0; j < n[i]; j++) {
                scanf ("%d", &tj[i][j]);
            }
            for (j = 0; j < n[i]; j++) {
                scanf ("%d", &qw[i][j]);
            }
        }
        k++;
    }
    for (i = 0; i < k; i++) {
        for (a = 0; a < (n[i] - 1); a++) {
            for (b = 0; b < (n[i] - a - 1); b++) {
                if (tj[i][b] < tj[i][b + 1]) {
                    t = tj[i][b];
                    tj[i][b] = tj[i][b + 1];
                    tj[i][b + 1] = t;
                }
                if (qw[i][b] < qw[i][b + 1]) {
                    t = qw[i][b];
                    qw[i][b] = qw[i][b + 1];
                    qw[i][b + 1] = t;
                }
            }
        }
        q1 = 0;
        q2 = 0;
        q = 0;
        j1 = 0;
        j2 = 0;
        m1 = 0;
        m2 = 0;
        for (;;) {
            if ((j1 + j2) == (n[i] - 1)) {
                if (tj[i][j1] > qw[i][m1]) {
                    q1++;
                }
                if (tj[i][j1] == qw[i][m1]) {
                    q2++;
                }
                break;
            }
            if (tj[i][n[i] - j2 - 1] > qw[i][n[i] - m2 - 1]) {
                q1++;
                j2++;
                m2++;
            }
            else {
                if (tj[i][n[i] - j2 - 1] < qw[i][n[i] - m2 - 1]) {
                    m1++;
                    j2++;
                }
                else {
                    if ((tj[i][n[i] - j2 - 1] == qw[i][n[i] - m2 - 1]) && (tj[i][j1] > qw[i][m1])) {
                        q1++;
                        m1++;
                        j1++;
                    }
                    else {
                        if ((tj[i][n[i] - j2 - 1] == qw[i][n[i] - m2 - 1]) && (tj[i][j1] < qw[i][m1])) {
                            m1++;
                            j2++;
                        }
                        else {
                            if ((tj[i][n[i] - j2 - 1] == qw[i][n[i] - m2 - 1]) && (tj[i][j1] == qw[i][m1])) {
                                if (qw[i][m1] > tj[i][n[i] - j2 - 1]) {
                                    m1++;
                                    j2++;
                                }
                                else {
                                    m1++;
                                    j2++;
                                    q2++;
                                }
                            }
                        }
                    }
                }
            }
        }
        q = q1 * 200 - (n[i] - q1 - q2) * 200;
        printf ("%d\n", q);
    }
}

