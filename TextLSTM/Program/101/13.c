int main () {
    int a, b, c, word [4], rank [3], i;
    char name [3];
    for (a = 0; a <= 2; a++)
        for (b = 0; b <= 2; b++) {
            if (a == b)
                continue;
            c = 3 - a - b;
            word[1] = (b > a) + (c == a);
            word[2] = (a > b) + (a > c);
            word[3] = (c > b) + (b > a);
            rank[a] = 1;
            rank[b] = 2;
            rank[c] = 3;
            if (word[rank[0]] > word[rank[1]] > word[rank[2]]) {
                name[a] = 'A';
                name[b] = 'B';
                name[c] = 'C';
                for (i = 0; i <= 2; i++)
                    cout << name[i];
            }
        }
    return 0;
}

