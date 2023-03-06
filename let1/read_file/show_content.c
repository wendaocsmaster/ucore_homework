#include<stdio.h>


// The argc means the numbers of parameters, the argv is a pointer arrays,
// it can be also written as 'char* argv[]', every pointer corresponds to
// a parameters' address. The argv[0] points to the program itself.
// parameter
int main(int argc, char* argv[])
{
	// Open a file by only-read mode.
	
	const char *path = argv[1];
	FILE *fp = fopen(path,"r");
	// If the file is empty, return.
	if(NULL == fp)
	{
		fclose(fp);
		printf("This file is test");
	}

	//The buffer stored the file content
	char buff[255];
	// Redirct the seek to file end.
	fseek(fp,0,SEEK_END);
	// Compute the bytes accounted for the file content.
	int length = ftell(fp);
	// Redirct the seek to the file start.
	rewind(fp);
	// Read the file content.
	int len = fread(buff, 1, length, fp);
	// Output the content.
	printf("%s\n",buff);
	//Close the file.
	fclose(fp);
	return 0;
}

