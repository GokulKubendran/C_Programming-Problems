#ifndef RAINDROPS_H_INCLUDED
#define RAINDROPS_H_INCLUDED
void oper(int arr[], int num)
{
    for(int i = 0 ; i < num ; i++)
    {
        if (arr[i] % 3 == 0) {
		printf("pling ");
	}
	else if (arr[i] % 5 == 0) {
		printf("Plang ");
	}
	else if (arr[i] % 7 == 0) {
		printf("Plong ");
	}
    else {
		printf("%d", arr[i]);
		}

    }
}
#endif // RAINDROPS_H_INCLUDED
