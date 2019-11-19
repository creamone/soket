#include<stdio.h>
#include<stdlib.h>
#include<pthread.h> //쓰레드에대한 내용 포함된 라이브러리

void *func_thread(void *); //스레드가 수행할 함수
// void * : Java의  Object와 비슷한 개념. 모든 타입으로 형변환 가능 어떤타입을 오게해야될지모를떄 쓰라

int main(){
	int status;
	pthread_t thread_id;
	pthread_create(&thread_id, NULL, func_thread, NULL);

	printf("thread %x is created\n", thread_id);
	pthread_join(thread_id, (void **)&status); //정보를 넘겨주라고 status	
//sleep(2);// sleep을 걸어줘서 2초동안 쓰레드가 다 보이는거임
	printf("main thread END\n");
	return 0;
}

void * func_thread(void *argv){
	int i=0;
	while(i<10){
		i++;
		printf("thread %dth executing ....\n",i);
	}
}
