####Compile and load modules####
make
sudo insmod scheduler/process_queue.ko
sudo insmod scheduler/process_scheduler.ko time_quantum=5
sudo insmod scheduler/process_set.ko
make comp_pr_test
make pr_test

####TO run test####
make comp_pthread_test
make pthread_test

####To remove modules####
make cleanall