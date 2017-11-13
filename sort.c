#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int size, int array[]) {
	for(int i=0; i<size;i++) 
        {
		for(int j=0; j<i; j++)
		{
			if(array[j] > array[j+1])
			{
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	
	printf("%d ", array[i] );
	}
}

void main (int argc, char *argv[])
{
	if(argc < 3)
	{
		printf("Please enter 10 integers and the number for your selected sort.");
	}
	else
	{
		int size = argc - 2;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			arr[i] = atoi(argv[i+2]);
		}
		if(atoi(argv[1]) == 1)
		{
			bubbleSort(size,arr);
                        printf("\n");
			for(int i=0; i < size; i++) printf("%d ", arr[i]);
                        printf("\n");
		}
	}
}



