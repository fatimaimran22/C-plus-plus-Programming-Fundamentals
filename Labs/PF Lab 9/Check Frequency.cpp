#include<iostream>
using namespace std;

//Input
void input(int arr[])
{
	cout<<"Enter the elements ofthe array: "<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>arr[i];
	}
}
// Output
void output(int arr[])
{
	cout<<"\nThe elements of the array are: "<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<arr[i]<<" ";
	}
}
//even odd separate
void Evensort(int arr[])
{
	int j=0, count=0;
	int C[10];
	for(int i=0; i<10; i++)
	{
		if(arr[i]%2==0)
		{
			C[j]=arr[i];
			count++;
			j++;
		}
		
	}
	j=count;
	for(int i=0; i<10; i++)
	{
		if(arr[i]%2==1)
		{
			C[j]=arr[i];
			j++;
		}
	}
	for(int i=0; i<10; i++)
	{
		arr[i]=C[i];
		
	}
}
// Check Frequency
void CheckFrequency(int arr[])
{
	int count;
	for(int i=0;i<10;i++)
	{
		count=0;
		int flag=1;
		for(int j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			for(int k=0;k<10;k++)
			{
				if (arr[i]==arr[k])
				{
					count++;
				}
			}
		cout <<"\nFrequency of " << arr[i] << " is " << count << endl;	
		}
	}
}
//bionumSum
void bionumSum(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		int c=arr[i];
		int count =0;
		for(int i=1; i<c; i++)
		{
			count=count+i;
	    }
		arr[i]=count;
	}
}
//square
void square()
{
	int arr1[5];
	cout<<"\nEnter the elements of array no 1"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>arr1[i];
	}
	int arr2[5];
	for(int i=0; i<5; i++)
	{
		arr2[i]=arr1[i];
	}
	for(int i=0; i<5; i++)
	{
		int sq=0;
		sq=arr2[i]*arr2[i];
		arr2[i]=sq;
	}
	cout<<"\nTHE FIRST ARRAY:";
	for(int i=0; i<5; i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<"\nTHE SECOND ARRAY:";
	for(int i=0; i<5; i++)
	{
		cout<<arr2[i]<<" ";
	}
}
//sortArray
void sortArray(int num[], int size)
{
	int max,index;
	for(;size>1;size--)
	{
		max=num[0],index=0;
		for(int i=0;i<size;i++)
		{
			if(max<num[i])
			{
				max=num[i];
				index=i;
			}
		}
		swap(num[index],num[size-1]);
	}
}

int main()
{
	int A[10];
	input(A); //Initializing the array
	sortArray(A,10);
	output(A); //Printing the array
	Evensort(A);
	output(A);
	CheckFrequency(A); //Occurrence
	bionumSum(A, 10); 
	output(A);
	square();
	cout<<endl;
	system("pause");
	return 0;
}






