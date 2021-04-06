#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

void show_stat_info(char const *, struct stat *);

int main(int argc, char const *argv[])
{
    struct stat info;

    if (argc > 1)
    {
        if (stat(argv[1], &info) != -1)
        {
            show_stat_info(argv[1], &info);
            return 0;
        } else {
            perror(argv[1]);
        }
        return 1;
    }
}

void show_stat_info(char const *fname, struct stat *buf)
{
    printf("     mod: %o\n", buf->st_mode);
    printf("   links: %ld\n", buf->st_nlink);
    printf("    user: %d\n", buf->st_uid);
    printf("   group: %d\n", buf->st_gid);
    printf("    size: %ld\n", buf->st_size);
    printf(" modtime: %d\n", buf->st_mtim);
    printf("    name: %s\n", fname);
}
