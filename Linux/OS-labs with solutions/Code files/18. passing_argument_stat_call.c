#include<stdio.h>
#include<string.h>
#include<sys/stat.h>

int main(int argc, char *argv[]){
    if(argc>1)
    {
         for(int i=1;i<argc; i++)
         {

             printf("File Name is %s \n",argv[i]);
             //creating a variable sfile of type stat (structure)
             struct stat sfile;
             //system call 
             //stat(argv[i],&sfile);
               if(stat(argv[i],&sfile)==-1){
                    printf("Error Occurred\n");
                }else
                {

                //Accessing data members of stat struct
                printf("\nFile st_uid %d \n",sfile.st_uid);
                printf("\nFile st_blksize %ld \n",sfile.st_blksize);
                printf("\nFile st_gid %d \n",sfile.st_gid);
                printf("\nFile st_blocks %ld \n",sfile.st_blocks);
                printf("\nFile st_size %ld \n",sfile.st_size);
                printf("\nFile st_nlink %u \n",(unsigned int)sfile.st_nlink);
                printf("\nFile Permissions User\n");
                //For st_mode Flags detail see linux documentation
                printf((sfile.st_mode & S_IRUSR)? "r":"-");
                printf((sfile.st_mode & S_IWUSR)? "w":"-");
                printf((sfile.st_mode & S_IXUSR)? "x":"-");
                printf("\n");
                }

         }
    }
return 0;
}
