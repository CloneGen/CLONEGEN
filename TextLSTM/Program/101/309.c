int main () {
    int a, b, c, x, y, z;
    char ans [3];
    for (a = 0; a < 3; a++)
        for (b = 0; b < 3; b++)
            for (c = 0; c < 3; c++) {
                x = 2 - a;
                y = 2 - b;
                z = 2 - c;
                ans[a] = 'A';
                ans[b] = 'B';
                ans[c] = 'C';
                if ((b > a) + (c == a) == x && (a > b) + (a > c) == y && (c > b) + (b > a) == z)
                    cout << ans[0] << ans[1] << ans[2] << endl;
            }
    return 0;
}

