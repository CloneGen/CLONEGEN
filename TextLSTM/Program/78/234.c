int main () {
    int weight [4];
    char name [4] = {'z', 'q', 's', 'l'};
    for (weight[0] = 1; weight[0] <= 5; weight[0]++)
        for (weight[1] = 1; weight[1] <= 5; weight[1]++)
            if (weight[0] != weight[1])
                for (weight[2] = 1; weight[2] <= 5; weight[2]++)
                    if (weight[0] != weight[2] && weight[1] != weight[2])
                        for (weight[3] = 1; weight[3] <= 5; weight[3]++)
                            if (weight[0] != weight[3] && weight[1] != weight[3] && weight[2] != weight[3])
                                if ((weight[0] + weight[1] == weight[2] + weight[3]) && ((weight[0] + weight[3] > weight[1] + weight[2]) && weight[0] + weight[2] < weight[1])) {
                                    for (int i = 0;
                                    i <= 2; i++)
                                        for (int j = 3;
                                        j > i; j--)
                                            if (weight[j] > weight[i]) {
                                                int p = weight[j];
                                                weight[j] = weight[i];
                                                weight[i] = p;
                                                char q = name[j];
                                                name[j] = name[i];
                                                name[i] = q;
                                            }
                                    for (int k = 0;
                                    k <= 3; k++)
                                        cout << name[k] << " " << weight[k] << 0 << endl;
                                    break;
                                }
    return 0;
}

