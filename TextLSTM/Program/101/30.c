int main () {
    int a, b, c;
    int words [4];
    int rank [4];
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                if (a != b && b != c && a != c) {
                    words[1] = (b < a) + (c == a);
                    words[2] = (a < b) + (a < c);
                    words[3] = (c < b) + (b < a);
                    rank[a] = 1;
                    rank[b] = 2;
                    rank[c] = 3;
                    if (words[rank[1]] < words[rank[2]] && words[rank[2]] < words[rank[3]]) {
                        char c;
                        for (int i = 3;
                        i >= 1; i--) {
                            c = rank[i] + 64;
                            cout << c;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

