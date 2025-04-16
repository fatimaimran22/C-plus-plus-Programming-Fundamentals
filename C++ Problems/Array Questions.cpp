//---------------------------------------------------------------------------------------------------------------
////         S E L E C T I O N         S O R T
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int data[10], max, max_index=0; 
//	cout<<"Please enter the elements of the array: "<<endl;
//	for(int i=0; i<10; i++)
//	{
//		cin>>data[i];
//	}
//	for(int size=10; size>1; size--)
//	{
//		max=data[0];
//		max_index=0;
//		for(int i=0; i<size; i++)
//		{
//			if(max<data[i])
//			{
//				max=data[i];
//				max_index=i;
//			}
//		}
//		swap(data[max_index], data[size-1]);
//	}
//	for(int i=0; i<10; i++)
//	{
//		cout<<data[i]<<" ";
//	}
//	system("pause");
//	return 0;
//}

//---------------------------------------------------------------------------------------------------------------------

//     F I N D I N G    T H E     L A R G E S T    N U M B E R
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int data[10]; 
//	int max, max_index;
//	cout<<"Enter the elements of the array: "<<endl;
//	for(int i=0; i<10 ; i++)
//	{
//		cin>>data[i];
//	}
//	for(int size=10; size>1; size--)
//	{
//		max=data[0];
//		max_index=0;
//		for(int i=0; i<size; i++)
//		{
//			if(max<data[i])
//			{
//				max=data[i];
//				max_index=i;
//			}
//		}
//		swap(data[max_index], data[size-1]);
//	}
//	for(int i=0; i<10 ; i++)
//	{
//		cout<<data[i]<"  ";
//	}
//	max=data[0];
//	max_index=0;
//	for(int i=0; i<9; i++)
//	{
//		if(max<data[i])
//		{
//			max=data[i];	
//			max_index=i;
//		}
//	}
//	cout<<"\n The second largest is: "<<data[max_index];
//	cout<<endl;
//	system("pause");
//	return 0;
//}


