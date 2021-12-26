#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main()
{
    // Declare a stat struct
    struct stat buf;

    // Stores stats of copy to buf
    stat("copy", &buf);

    // Print stats
    printf("I =         %d\n" , (         int)buf.st_ino     );
    printf("M =         %o\n" , (unsigned int)buf.st_mode    );
    printf("link =      %o\n" , (unsigned int)buf.st_nlink   );
    printf("UID =       %d\n" , (         int)buf.st_uid     );
    printf("SIZE =      %d\n" , (         int)buf.st_size    );
    printf("A =         %d\n" , (         int)buf.st_atime   );
    printf("M =         %d\n" , (         int)buf.st_mtime   );
    printf("C =         %d\n" , (         int)buf.st_ctime   );
    printf("Blk =       %d\n" , (         int)buf.st_blksize );
    printf("Blocks =    %d\n" , (         int)buf.st_blocks  );

    return 0;
}