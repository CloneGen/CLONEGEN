int main () {
    int a, b, c;
    for (a = 1; a < 4; a++)
        for (b = 1; b < 4; b++)
            for (c = 1; c < 4; c++)
                if (((b > a) + (c == a) == 3 - a) && ((a > b) + (a > c) == 3 - b) && ((c > b) + (b > a) == 3 - c)) {
                    if (a == 2 && b == 1 && c == 3)
                        cout << "B" << "A" << "C";
                    if (a == 2 && b == 3 && c == 1)
                        cout << "C" << "A" << "B";
                    if (a == 3 && b == 1 && c == 2)
                        cout << "B" << "C" << "A";
                    if (a == 3 && b == 2 && c == 1)
                        cout << "C" << "B" << "A";
                }
    return 0;
}

