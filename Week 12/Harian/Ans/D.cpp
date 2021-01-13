#include <stdio.h>
#include <string.h>

struct Data {
    char name[10];
    int score;
    int rank;
};

void mergeByScore(Data* data, int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    Data dataLeft[leftSize], dataRight[rightSize];

    for (int i = 0; i < leftSize; i++)
        dataLeft[i] = data[left + i];

    for (int i = 0; i < rightSize; i++)
        dataRight[i] = data[mid + i + 1];

    int i = 0;
    int j = 0;
    int k = left;

    while(i < leftSize && j < rightSize)
    {
        if (dataLeft[i].score > dataRight[j].score)
            data[k++] = dataLeft[i++];

        else if (dataLeft[i].score < dataRight[j].score)
            data[k++] = dataRight[j++];

        else
        {
            if (strcmp(dataLeft[i].name, dataRight[j].name) < 0)
                data[k++] = dataLeft[i++];
            else
                data[k++] = dataRight[j++];
        }
    }

    while (i < leftSize)
        data[k++] = dataLeft[i++];

    while (j < rightSize)
        data[k++] = dataRight[j++];
}

void sortByScore(Data* data, int left, int right) {
    if (left >= right)
        return;

        int mid = left + (right - left) / 2;
        sortByScore(data, left, mid);
        sortByScore(data, mid + 1, right);
        mergeByScore(data, left, mid, right);
}

int main() {

    int n;
    scanf ("%d", &n); getchar();
    Data data[n + 1];
    for (int i = 0; i < n; i++)
        scanf ("%s %d", data[i].name, &data[i].score);

    sortByScore(data, 0, n - 1);

    data[0].rank = 1;
    for (int i = 1; i < n; i++)
    {
        if (data[i].score == data[i - 1].score)
            data[i].rank = data[i - 1].rank;
        else
            data[i].rank = i + 1;
    }

    for (int i = 0; i < n; i++)
        printf ("%d %s %d\n", data[i].rank, data[i].name, data[i].score);
        
    return 0;
}

/*
TEST CASE

8
aab 77
aab 85
aaa 77
xbcd 66
aac 88
aae 66
aaw 88
eey 76

10
aab 77
aab 85
aac 85
aad 85
aae 85
aaa 77
xbcd 66
hg 50
gh 50
gg 50
*/