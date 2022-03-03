int main () {
    int rice [3];
    char name [3] = {'A', 'B', 'C'};
    int right [3];
    int i;
    for (rice[0] = -1; rice[0] <= 1; rice[0]++)
        for (rice[1] = -1; rice[1] <= 1; rice[1]++)
            if (rice[1] != rice[0])
                for (rice[2] = -1; rice[2] <= 1; rice[2]++)
                    if (rice[2] != rice[1] && rice[2] != rice[0]) {
                        right[0] = (rice[1] > rice[0]) + (rice[2] == rice[0]);
                        right[1] = (rice[0] > rice[1]) + (rice[0] > rice[2]);
                        right[2] = (rice[2] > rice[1]) + (rice[1] > rice[0]);
                        if ((rice[0] + right[0]) == 1 && (rice[1] + right[1]) == 1 && (rice[2] + right[2]) == 1) {
                            for (i = 0; rice[i] != -1; i++)
                                ;
                            cout << name[i];
                            for (i = 0; rice[i] != 0; i++)
                                ;
                            cout << name[i];
                            for (i = 0; rice[i] != 1; i++)
                                ;
                            cout << name[i];
                            cout << endl;
                        }
                    }
    return 0;
}

