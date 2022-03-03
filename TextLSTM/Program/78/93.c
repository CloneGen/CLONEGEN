int main () {
    int weight [4] = {0}, c2, c3, c4, sum, i, j, t;
    char name [4] = {'z', 'q', 's', 'l'}, c;
    for (weight[0] = 10; weight[0] <= 50; weight[0] += 10)
        for (weight[1] = 10; weight[1] <= 50; weight[1] += 10) {
            if (weight[1] == weight[0])
                continue;
            for (weight[2] = 10; weight[2] <= 50; weight[2] += 10) {
                if (weight[2] == weight[0] || weight[2] == weight[1])
                    continue;
                for (weight[3] = 10; weight[3] <= 50; weight[3] += 10) {
                    if (weight[3] == weight[0] || weight[3] == weight[1] || weight[3] == weight[2])
                        continue;
                    c2 = (weight[0] + weight[1] == weight[2] + weight[3]);
                    c3 = (weight[0] + weight[3] > weight[1] + weight[2]);
                    c4 = (weight[0] + weight[2] < weight[1]);
                    sum = c2 + c3 + c4;
                    if (sum == 3) {
                        for (i = 0; i < 4; i++) {
                            for (j = 3; j > i; j--) {
                                if (weight[j] > weight[j - 1]) {
                                    t = weight[j - 1];
                                    weight[j - 1] = weight[j];
                                    weight[j] = t;
                                    c = name[j - 1];
                                    name[j - 1] = name[j];
                                    name[j] = c;
                                }
                            }
                            cout << name[i] << " " << weight[i] << endl;
                        }
                    }
                }
            }
        }
    return 0;
}

