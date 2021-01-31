#include <stdio.h>

void merge(long long* arr, long long left, long long mid, long long right) {
    long long leftSize = mid - left + 1;
    long long rightSize = right - mid;
    long long arrlefteft[leftSize], arrrightight[rightSize];

    for (long long i = 0; i < leftSize; i++)
        arrlefteft[i] = arr[left + i];

    for (long long i = 0; i < rightSize; i++)
        arrrightight[i] = arr[mid + i + 1];

    long long i = 0, j = 0, k = left;

    while (i < leftSize && j < rightSize)
    {
        if (arrlefteft[i] < arrrightight[j])
            arr[k++] = arrlefteft[i++];
        else
            arr[k++] = arrrightight[j++];
    }

    while (i < leftSize)
        arr[k++] = arrlefteft[i++];
    while (j < rightSize)
        arr[k++] = arrrightight[j++];
}

void mergeSort(long long* arr, long long left, long long right) {
    if (left < right)
    {
        long long mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

long long first(long long* arr, long long left, long long right, long long target) {
	long long idx = -1;

    while (left <= right)
	{
		long long mid = left + (right - left) / 2;
		if (arr[mid] >= target)
		{
			idx = mid;
			right = mid - 1;
		}
		else
            left = mid + 1;
	}
	return idx;
}

long long last(long long* arr, long long left, long long right, long long target) {
	long long idx = -1;

    while (left <= right)
	{
		long long mid = left + (right - left) / 2;
		if (arr[mid] <= target)
		{
			idx = mid;
			left = mid + 1;
		}
		else
            right = mid - 1;
	}
	return idx;
}

int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        int n;
        scanf ("%d", &n);
        long long arr[n], total = 0;
        for (int i = 0; i < n; i++)
        {
            scanf ("%lld", &arr[i]);
            total += arr[i];
        }

        mergeSort(arr, 0, n - 1);
        long long max = arr[n - 1];
        long long min = arr[0];

        int query;
        scanf ("%d", &query);
        printf("Case #%d:\n", q);
        for (int w = 0; w < query; w++)
        {
            long long left, right;
            scanf ("%lld %lld", &left, &right);
            long long res = 0;
            long long start = first(arr, 0, n - 1, left);
            long long end = last(arr, 0, n - 1, right);

            if (left > max || right < min)
                start = end = -1;

            else if (left < min)
                start = 0;
                
            else if (right > max)
                end = n - 1;

            if (start == -1 && end == -1)
                puts("0");

            else if (start == 0 && end == n - 1)
                printf ("%lld\n", total);

            else
            {
                while (start <= end)
                {
                    if (start == end)
                        res += arr[start];
                    else
                        res += arr[start] + arr[end];
                    start++;
                    end--;
                }
                printf ("%lld\n", res);

            }


        }
    }
    return 0;
}

/*
3
6
3 2 1 3 5 1
3
3 3
2 3
1 5
5
4 5 6 7 8
7
4 4
4 5
4 6
4 7
4 8
4 9
3 8
5
11 12 13 14 15
3
1 10
16 20
1 20
*/