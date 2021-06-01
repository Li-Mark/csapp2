#include "csapp.h"
#include "csapp.c"

//  Result: f1 = 3, f2  = 3
//  When Unix open a file, the kelno will return a positive number, called discriptor
// 0 = STDIN_FILENO, 1=STDOUT_FILENO, 2=STDERR_FILENO
// So if we open the file successfully, the Open should return 3
// But when the file is not exist, there will throw an error 'undefined reference'
// So we need create the file with  Open("foo1.txt",  O_RDONLY | O_CREATE , 0 );

int main()
{
    int  fd1,  fd2;
    fd1  =  Open("foo1.txt",  O_RDONLY , 0 );
    Close(fd1);
    printf("fd1 = %d\n", fd1);
    fd2  =  Open("baz.txt", O_RDONLY, 0 );
    Close(fd2);
    printf("fd2 = %d\n", fd2);
    exit(0);
}