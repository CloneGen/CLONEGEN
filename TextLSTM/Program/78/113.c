int main () {
    int z, q, s, l;
    int temp;
    char tnam;
    for (z = 10; z <= 50; z = z + 10)
        for (q = 10; q <= 50; q = q + 10) {
            if (z == q)
                continue;
            for (s = 10; s <= 50; s = s + 10) {
                if (s == z || s == q)
                    continue;
                for (l = 10; l <= 50; l = l + 10) {
                    if (l == z || l == q || l == s)
                        continue;
                    if ((z + q == s + l) + (z + l > s + q) + (z + s < q) == 3) {
                        int wei [4] = {z, q, s, l};
                        char nam [4] = {'z', 'q', 's', 'l'};
                        for (int i = 1;
                        i <= 3; i++)
                            for (int j = 0;
                            j <= 3 - i; j++)
                                if (wei[j] < wei[j + 1]) {
                                    temp = wei[j + 1];
                                    wei[j + 1] = wei[j];
                                    wei[j] = temp;
                                    tnam = nam[j + 1];
                                    nam[j + 1] = nam[j];
                                    nam[j] = tnam;
                                }
                        for (int k = 0;
                        k <= 3; k++)
                            cout << nam[k] << " " << wei[k] << endl;
                    }
                }
            }
        }
    return 0;
}

