int main () {
    char name [4] = {'z', 'q', 's', 'l'};
    int weight [4] = {0}, cc1, cc2, cc3, i;
    for (weight[0] = 10; weight[0] < 60; weight[0] = weight[0] + 10)
        for (weight[1] = 10; weight[1] < 60; weight[1] = weight[1] + 10)
            for (weight[2] = 10; weight[2] < 60; weight[2] = weight[2] + 10)
                for (weight[3] = 10; weight[3] < 60; weight[3] = weight[3] + 10) {
                    if ((weight[0] != weight[1]) && (weight[0] != weight[2]) && (weight[0] != weight[3]) && (weight[1] != weight[2]) && (weight[1] != weight[3]) && (weight[2] != weight[3])) {
                        cc1 = ((weight[0] + weight[1]) == (weight[2] + weight[3]));
                        cc2 = ((weight[0] + weight[3]) > (weight[2] + weight[1]));
                        cc3 = ((weight[0] + weight[2]) < weight[1]);
                        if ((cc1 == 1) && (cc2 == 1) && (cc3 == 1)) {
                            for (i = 0; i < 4; i++) {
                                if (weight[i] == 50)
                                    cout << name[i] << ' ' << weight[i] << endl;
                            }
                            for (i = 0; i < 4; i++) {
                                if (weight[i] == 40)
                                    cout << name[i] << ' ' << weight[i] << endl;
                            }
                            for (i = 0; i < 4; i++) {
                                if (weight[i] == 30)
                                    cout << name[i] << ' ' << weight[i] << endl;
                            }
                            for (i = 0; i < 4; i++) {
                                if (weight[i] == 20)
                                    cout << name[i] << ' ' << weight[i] << endl;
                            }
                            for (i = 0; i < 4; i++) {
                                if (weight[i] == 10)
                                    cout << name[i] << ' ' << weight[i] << endl;
                            }
                        }
                    }
                }
    return 0;
}

