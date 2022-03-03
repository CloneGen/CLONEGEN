int main () {
    char name [4] = {'0'};
    int a, b, c;
    int i;
    int ta, tb, tc;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                ta = (b > a) + (c == a);
                tb = (a > b) + (a > c);
                tc = (c > b) + (b > a);
                if ((((a < b) && (ta > tb)) + ((a == b) && (ta == tb)) + ((a > b) && (ta < tb)) == 1) && (((b < c) && (tb > tc)) + ((b == c) && (tb == tc)) + ((b > c) && (tb < tc)) == 1) && (((c < a) && (tc > ta)) + ((c == a) && (tc == ta)) + ((c > a) && (tc < ta)) == 1)) {
                    name[a] = 'A';
                    name[b] = 'B';
                    name[c] = 'C';
                }
            }
        }
    }
    for (i = 1; i <= 3; i++)
        cout << name[i];
    return 0;
}

