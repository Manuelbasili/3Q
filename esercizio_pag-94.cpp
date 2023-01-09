#include <pthread.h>
#include <stdio.h>
#include<unistd.h>

void *codice_thread(void * arg){  //codice che esegue il thread

pid_t pid;
pid=getpid();    // ritorna l'identificatore del processo pID
pthread_t tid;
tid = pthread_self(); // ritorna l'identifcatore del thread tID
printf("Sono il thread %i del processo %i\n", (int) tid, pid);
}


int main()

{
pthread_t ptid;  // identifcatore thread alla creazione
printf("il pid del main è %d\n" , (int) getpid());
pthread_create (&ptid , NULL, &codice_thread,NULL);
return 0;




}
