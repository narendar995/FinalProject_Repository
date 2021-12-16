#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test_pr(void) {

	FILE *fp = fopen("/proc/process_sched_add","w");
	fprintf(fp, "%d", getpid());
 	fclose(fp);
    clock_t begin = clock();

 	while(1) {
 		printf("My pid: %d\n", getpid());
        printf("Seconds Elapsed: %f secs", (double)(clock() - begin)/ CLOCKS_PER_SEC);
 		sleep(1);
 	}
}

int main() {
    test_pr();
	return 0;
}
