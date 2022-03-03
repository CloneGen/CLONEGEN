int main () {
    int Aapp, Bapp, Capp, i;
    int Aw, Bw, Cw;
    for (Aapp = 1; Aapp <= 3; Aapp++) {
        for (Bapp = 1; Bapp <= 3; Bapp++) {
            for (Capp = 1; Capp <= 3; Capp++) {
                Aw = (Bapp > Aapp) + (Capp == Aapp);
                Bw = (Aapp > Bapp) + (Aapp > Capp);
                Cw = (Capp > Bapp) + (Bapp > Aapp);
                if (3 - Aapp == Aw &&3 - Bapp == Bw &&3 - Capp == Cw) {
                    for (i = 0; i <= 3; i++) {
                        if (Aapp == i)
                            cout << "A";
                        if (Bapp == i)
                            cout << "B";
                        if (Capp == i)
                            cout << "C";
                    }
                }
            }
        }
    }
    return 0;
}

