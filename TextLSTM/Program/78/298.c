int main () {
    int w [4], w1 [4];
    int i, j, max;
    char name [4] = {'z', 'q', 's', 'l'};
    for (w[0] = 1; w[0] <= 5; w[0]++)
        for (w[1] = 1; w[1] <= 5; w[1]++)
            for (w[2] = 1; w[2] <= 5; w[2]++)
                for (w[3] = 1; w[3] <= 5; w[3]++)
                    if ((w[0] + w[1] == w[2] + w[3]) && (w[0] + w[3] > w[1] + w[2]) && (w[0] + w[2] < w[1])) {
                        for (i = 0; i <= 3; i++)
                            w1[i] = w[i];
                        for (i = 0; i <= 3; i++) {
                            max = 0;
                            for (j = 1; j <= 3; j++)
                                if (w1[j] > w1[max])
                                    max = j;
                            cout << name[max] << ' ' << w1[max] * 10 << endl;
                            w1[max] = 0;
                        }
                    }
    return 0;
}

