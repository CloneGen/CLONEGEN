int main () {
    int a, b, c;
    int rank [4];
    int i, j;
    int ta, tb, tc;
    for (a = 1; a <= 3; a++)
        for (b = 1; b <= 3; b++) {
            if (a == b)
                continue;
            for (c = 1; c <= 3; c++) {
                if ((c == a) || (c == b))
                    continue;
                ta = (b > a) + (c == a);
                tb = (a > b) + (a > c);
                tc = (c > b) + (b > a);
                if ((a + ta) == 3)
                    if ((b + tb) == 3)
                        if ((c + tc) == 3) {
                            rank[1] = a;
                            rank[2] = b;
                            rank[3] = c;
                            for (i = 1; i <= 3; i++)
                                for (j = 1; j <= 3; j++)
                                    if (rank[j] == i)
                                        cout << (char) (64 + j);
                        }
            }
        }
    return 0;
}

