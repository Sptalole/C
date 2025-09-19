#include <pthread.h>
/*
The pthread library is defined inside <pthread.h> header file. Generally, we don't need to explicity specify to the linker that we are using this library but if the program shows error, then compile it with the following flags: 
gcc sourceFile.c -lpthread */
#include <stdio.h>

void* foo(void* arg) {
    printf("Thread is running.\n");
    
     // Get current thread ID
    /*pthread_self()function returns the thread ID of the calling thread. This is useful when you need to identify or store the ID of the current thread in multi-threaded programs.*/
    pthread_t thisThread = pthread_self();
    printf("Current thread ID: %lu\n",
        (unsigned long)thisThread);
    
    // Explicity terminate thread
    pthread_exit(NULL);
    /*pthread_exit() function allows a thread to terminate its execution explicitly. 
    pthread_exit() is called when a thread needs to terminate its execution and optionally return a value to threads that are waiting for it.*/
    
    printf("This will not be executed.\n");
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_create(&thread, NULL, foo, NULL);
    /*pthread_create(thread, attr, routine, arg);
    thread : Pointer to a pthread_t variable where the system stores the ID of the new thread.
    attr : Pointer to a thread attributes object that defines thread properties. Use NULL for default attributes.
    routine: Pointer to the function that the thread will execute. It must return void* and accept a void* argument.
    arg: A single argument passed to the thread function. Use NULL if no argument is needed. You can pass a struct or pointer to pass multiple values.
*/

     sleep(5);
    //Requesting to cancel the thread after 5 seconds. 
    pthread_cancel(thread);
    // Wait for the thread to terminate
    // Wait for created thread to finish
    /*The pthread_cancel()function is used to request the cancellation of a thread. It sends a cancellation request to the target thread, but the actual termination depends on whether the thread is in a cancellable state and if it handles cancellation.*/
  
    pthread_join(thread, NULL);
    /*pthread_join() function allows one thread to wait for the termination of another thread. It is used to synchronize the execution of threads.*/

    return 0;
}