int main () {
    int z, q, s, l;
    for (z = 10; z <= 50; z += 10)
        for (q = 10; q <= 50; q += 10)
            if (z != q)
                for (s = 10; s <= 50; s += 10)
                    if (z != s && q != s)
                        for (l = 10; l <= 50; l += 10)
                            if (z != l && q != l && s != l)
                                if ((z + q == s + l) && ((z + l > q + s) && z + s < q)) {
                                    char rank [5] = {'\0', '\0', '\0', '\0', '\0'};
                                    rank[z / 10 - 1] = 'z';
                                    rank[q / 10 - 1] = 'q';
                                    rank[s / 10 - 1] = 's';
                                    rank[l / 10 - 1] = 'l';
                                    for (int i = 4;
                                    i >= 0; i--)
                                        if (rank[i] > 97)
                                            cout << rank[i] << " " << (i + 1) * 10 << endl;
                                }
    return 0;
}

