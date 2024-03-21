#include <time.h>
#include <string.h>

#include "header.h"

char *getCurrentTimeString() {
    time_t mytime = time(NULL);
    char *time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    return time_str;
}

