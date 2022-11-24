#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h> //in OS161 I think the header file is clock.h instead
#include <MLFQ.h>

#define NUMBER_OF_QUEUES 3 //number of queues within MLFQ, aka levels of priority
#define AGING_TIME 50 //50 second
#define TIME_QUANTUM 1 //1 second


void MLFQ(void){
	struct myMLFQ mlfq = malloc(sizeof(myMLFQ));
	time_t age_start = time(NULL);
	struct process_start = NULL;
	while(OS_is_running){
		
		//Age occurs and reset all queues
		if((age_start - time(NULL)) > 50){
			// reset all priority queues
			age_start = time(NULL);
		}
		
		//start process in priority queue, continuously go down the list of queues
		int i = 0;
		for(i = 0; i < NUMBER_OF_QUEUES; i++){
			//check if current queue is empty
			if(mlfq.queue[i]->totalLen == 0){
				continue
			}
			//there is something in the priority queue at that level
			//determine what different type of process currently are waiting
			//for each one that is not currently being used, put it on 
			//maybe make a thread for each type of process that can be executed?
			else{
				
				//once process starts, put a timer for it
				process_start = time(NULL);
				
			}
		}
		
		//process finishes, time it and change its queue based upon time
		
	}
}