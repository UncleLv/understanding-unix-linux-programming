# 第一章 Unix系统编程概述

## more

### 函数

#### [fopen](https://devdocs.io/c/io/fopen)

#### [fclose](https://devdocs.io/c/io/fclose)

#### [fgets](https://devdocs.io/c/io/fgets)

#### [fputs](https://devdocs.io/c/io/fputs)

#### [getchar](https://devdocs.io/c/io/getchar)

#### [getc](https://devdocs.io/c/io/fgetc)



### tips

#### [argc和argv](https://www.cprogrammingbasics.com/argv-and-argc/)

argc和argv是main函数的可选参数。argv是字符串数组，argc是参数的总数。argv的第一个元素是程序的名称。

```c
// demo.c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("argc: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    return 0;
}
```

```shell
$ ./demo abc 123
argc: 3
argv[0]: ./demo
argv[1]: abc
argv[2]: 123
```