void main () {
    int i, j, w [4], t;
    char n [4] = {'z', 'q', 's', 'l'}, c;
    for (w[0] = 1; w[0] < 6; w[0]++) {
        for (w[1] = 1; w[1] < 6; w[1]++) {
            if (w[0] == w[1])
                continue;
            for (w[2] = 1; w[2] < 6; w[2]++) {
                if (w[0] == w[2] || w[1] == w[2])
                    continue;
                for (w[3] = 1; w[3] < 6; w[3]++) {
                    if (w[0] == w[3] || w[1] == w[3] || w[2] == w[3])
                        continue;
                    if ((w[0] + w[3] > w[2] + w[1]) && w[0] + w[1] == w[2] + w[3] && w[0] + w[2] < w[1]) {
                        for (i = 0; i < 4; i++)
                            for (j = 0; j < 3 - i; j++)
                                if (w[j] < w[j + 1]) {
                                    t = w[j];
                                    w[j] = w[j + 1];
                                    w[j + 1] = t;
                                    c = n[j];
                                    n[j] = n[j + 1];
                                    n[j + 1] = c;
                                }
                        for (i = 0; i < 4; i++)
                            printf ("%c %d0\n", n[i], w[i]);
                        exit (1);
                    }
                }
            }
        }
    }
}

