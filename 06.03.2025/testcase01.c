// WAP to input 10 integer values and show the values along with sum of the values.

main(){
	int ar[10],i,sum=0;
	
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++)
		scanf("%d",&ar[i]);
	
	printf("\nValues in array are : ");	
	for(i=0;i<10;i++){
		printf("%d ",ar[i]);
		sum=sum+ar[i];
	}
		
	printf("\nSum of values is %d",sum);	
}
