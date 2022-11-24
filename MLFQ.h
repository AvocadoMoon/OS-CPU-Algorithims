#ifndef MLFQ.h 

//a queue of pointers for a process,
typedef struct{
	int rr[];
	int len;
}myRoundRobin;

//round robin declared for every type of request
typedef struct{
	int totalLen;
	struct myRoundRobin CPU;
	struct myRoundRobin hardware;
	//etc....
}processMap;

//the different priority queues, each with different priority, highest being 0
typedef struct{
	struct processMap queue[];
	//each index within the queue contains a hash map of RR queues. The keys are the type of process execute 
	//the values are the RR queue themselves
}myMLFQ;

#endnif