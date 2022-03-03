int main () {
    char sn [4] = {'z', 'q', 's', 'l'};
    int wt [4], rk [4], w = 0;
    for (int i = 0;
    i < 4; i++)
        rk[i] = i;
    for (wt[0] = 1; wt[0] <= 5; wt[0]++) {
        for (wt[1] = 1; wt[1] <= 5; wt[1]++) {
            for (wt[2] = 1; wt[2] <= 5; wt[2]++) {
                for (wt[3] = 1; wt[3] <= 5; wt[3]++) {
                    if (wt[0] + wt[1] == wt[2] + wt[3] && wt[0] + wt[3] > wt[1] + wt[2] && wt[0] + wt[2] < wt[1]) {
                        int t;
                        w = 1;
                        for (int i = 0;
                        i < 4; i++) {
                            for (int j = i;
                            j < 4; j++) {
                                if (wt[rk[i]] < wt[rk[j]]) {
                                    t = rk[i];
                                    rk[i] = rk[j];
                                    rk[j] = t;
                                }
                            }
                        }
                        break;
                    }
                }
                if (w == 1)
                    break;
            }
            if (w == 1)
                break;
        }
        if (w == 1)
            break;
    }
    for (int i = 0;
    i < 4; i++)
        cout << sn[rk[i]] << ' ' << 10 * wt[rk[i]] << endl;
    return 0;
}

