int matrix [101] [101] [101];
int countsum;

void cal (int rank, int num) {
    if (rank != 1) {
        int rowmin [rank];
        int columnmin [rank];
        for (int i = 0;
        i <= rank - 1; ++i) {
            for (int j = 0;
            j <= rank - 1; ++j) {
                if (j == 0)
                    rowmin[i] = matrix[num][i][j];
                else
                    rowmin[i] = min (rowmin[i], matrix[num][i][j]);
            }
            if (rowmin[i] != 0)
                for (int j = 0;
                j <= rank - 1; ++j)
                    matrix[num][i][j] = matrix[num][i][j] - rowmin[i];
        }
        for (int i = 0;
        i <= rank - 1; ++i) {
            for (int j = 0;
            j <= rank - 1; ++j) {
                if (j == 0)
                    columnmin[i] = matrix[num][j][i];
                else
                    columnmin[i] = min (columnmin[i], matrix[num][j][i]);
            }
            if (columnmin[i] != 0)
                for (int j = 0;
                j <= rank - 1; ++j)
                    matrix[num][j][i] = matrix[num][j][i] - columnmin[i];
        }
        countsum += matrix[num][1][1];
        for (int i = 2;
        i <= rank - 1; ++i)
            for (int j = 0;
            j <= rank - 1; ++j)
                matrix[num][j][i - 1] = matrix[num][j][i];
        for (int i = 2;
        i <= rank - 1; ++i)
            for (int j = 0;
            j <= rank - 1; ++j)
                matrix[num][i - 1][j] = matrix[num][i][j];
        cal (rank - 1, num);
    }
}

int main () {
    int n;
    cin >> n;
    for (int i = 0;
    i <= n - 1; ++i)
        for (int j = 0;
        j <= n - 1; ++j)
            for (int k = 0;
            k <= n - 1; ++k)
                cin >> matrix[i][j][k];
    for (int i = 0;
    i <= n - 1; ++i) {
        countsum = 0;
        cal (n, i);
        cout << countsum << endl;
    }
    return 0;
}

