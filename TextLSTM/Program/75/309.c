int main () {
    int start1 [10000], end1 [10000];
    int i = 0, renshu = 0, max = 0, flag = 0, flag1 = 0, j = 0;
    int num [100000];
    char start [200000], end [200000];
    memset (num, 0, sizeof (num));
    memset (start1, 0, sizeof (start1));
    memset (start, 0, sizeof (start));
    memset (end, 0, sizeof (end));
    memset (end1, 0, sizeof (end1));
    cin.getline (start, 200000, '\n');
    cin.getline (end, 200000, '\n');
    for (i = 0; i < 200000; i++) {
        if (start[i] == 0) {
            renshu++;
            flag = flag1;
            flag1 = i - 1;
            if (renshu == 1) {
                for (j = flag1; j >= 0; j--)
                    start1[renshu] = start1[renshu] + (start[j] - '0') * pow ((double) 10, (double) (flag1 - j));
            }
            else {
                for (j = flag1; j > flag + 1; j--)
                    start1[renshu] = start1[renshu] + (start[j] - '0') * pow ((double) 10, (double) (flag1 - j));
            }
            break;
        }
        if (start[i] != 0) {
            if (start[i] == ',') {
                renshu++;
                flag = flag1;
                flag1 = i - 1;
                if (renshu == 1) {
                    for (j = flag1; j >= 0; j--)
                        start1[renshu] = start1[renshu] + (start[j] - '0') * pow ((double) 10, (double) (flag1 - j));
                }
                else {
                    for (j = flag1; j > flag + 1; j--)
                        start1[renshu] = start1[renshu] + (start[j] - '0') * pow ((double) 10, (double) (flag1 - j));
                }
            }
        }
    }
    flag = 0;
    flag1 = 0;
    renshu = 0;
    for (i = 0; i < 200000; i++) {
        if (end[i] == 0) {
            renshu++;
            flag = flag1;
            flag1 = i - 1;
            if (renshu == 1) {
                for (j = flag1; j >= 0; j--)
                    end1[renshu] = end1[renshu] + (end[j] - '0') * pow ((double) 10, (double) (flag1 - j));
            }
            else {
                for (j = flag1; j > flag + 1; j--)
                    end1[renshu] = end1[renshu] + (end[j] - '0') * pow ((double) 10, (double) (flag1 - j));
            }
            break;
        }
        if (end[i] != 0) {
            if (end[i] == ',') {
                renshu++;
                flag = flag1;
                flag1 = i - 1;
                if (renshu == 1) {
                    for (j = flag1; j >= 0; j--)
                        end1[renshu] = end1[renshu] + (end[j] - '0') * pow ((double) 10, (double) (flag1 - j));
                }
                else {
                    for (j = flag1; j > flag + 1; j--)
                        end1[renshu] = end1[renshu] + (end[j] - '0') * pow ((double) 10, (double) (flag1 - j));
                }
            }
        }
    }
    for (i = 1; i <= renshu; i++) {
        for (j = start1[i]; j < end1[i]; j++)
            num[j]++;
    }
    for (i = 0; i < 1000; i++) {
        if (num[i] > max)
            max = num[i];
    }
    cout << renshu << " " << max << endl;
    return 0;
}

