#include "contiki.h"
#include <stdio.h>

PROCESS(min_kernel_process, "OS-only demo");
AUTOSTART_PROCESSES(&min_kernel_process);

static struct etimer tick;
static unsigned long counter;

PROCESS_THREAD(min_kernel_process, ev, data)
{
    PROCESS_BEGIN();
    printf("OS-only demo: process started\n");

    etimer_set(&tick, CLOCK_SECOND);

    while (1)
    {
        PROCESS_WAIT_EVENT_UNTIL(ev == PROCESS_EVENT_TIMER);
        counter++;
        printf("tick %lu (clock=%lu)\n", counter, (unsigned long)clock_time());
        etimer_reset(&tick);

        if (counter == 5)
        {
            printf("OS-only demo: done\n");
            break;
        }
    }

    PROCESS_END();
}
