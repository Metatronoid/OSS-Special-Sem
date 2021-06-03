// Open, write and close

# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePointer ;
	
	char data[50]
		= "Welcome to the Machine";

	filePointer = fopen("Test.c", "w") ;
	
	if ( filePointer == NULL )
	{
		printf( "Test.c file failed to open." ) ;
	}
	else
	{
		
		printf("The file is now opened.\n") ;
		
		if ( strlen ( data ) > 0 )
		{
			
			// writing in the file using fputs()
			fputs(data, filePointer) ;
			fputs("\n", filePointer) ;
		}
		
		fclose(filePointer) ;
		
		printf("Data successfully written in file Test.c\n");
		printf("The file is now closed.") ;
	}
	return 0;		
}
