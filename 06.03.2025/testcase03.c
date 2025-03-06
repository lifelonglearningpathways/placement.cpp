// WAP to input a string and reverse print it.
main(){
	char str[100];
	int i=0;
	
	printf("Enter a string : ");
	gets(str);
	
	while(str[i]){
		i++;
	}
	
	printf("Reverse of the string is : ");
	for(i--;i>=0;i--){
		putchar(str[i]);
	}
}
