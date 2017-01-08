#ifndef OSX_SEMAPHORE_H
#define OSX_SEMAPHORE_H

#include <Uno/Uno.h>
#include <semaphore.h>
#include <stdlib.h>
#include <unistd.h>

void free_semaphore(void * semaphore, char* name)
{
    sem_close((sem_t *)semaphore);
    sem_unlink(name);
}

void * init_semaphore(int initialCount, int maxCount, char* name)
{
    sem_t* semaphore;
    sem_unlink(name);
    if ((semaphore = sem_open(name, O_CREAT, 0600, initialCount)) == SEM_FAILED)
    {
        free_semaphore((void *)semaphore, name);
        return (void *)0;
    }
    return (void *)semaphore;
}

#endif