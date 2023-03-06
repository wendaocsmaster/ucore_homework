#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>

int main(int argc, char** argv)
{
	//Open a directory
	//DIR *curdir = opendir(argv[1]);
	DIR *curdir = opendir(".");
	if(NULL == curdir)
	{
		closedir(curdir);
		return 0;
	}
	// The  readdir() function returns a pointer to a dirent structure representing 
	// the next directory entry in the directory stream pointed to by dirp.  It returns
	// NULL on reaching the end of the directory stream or if an error occurred.
	struct dirent *dirstruct = NULL;
	while(dirstruct = readdir(curdir))
	{
		printf("%s\n",dirstruct->d_name);
	}
	//Close the directory.
	closedir(curdir);
	return 0;
}

