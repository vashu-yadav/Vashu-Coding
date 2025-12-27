#include <stdio.h>
#include <string.h>

typedef enum {
    STATE_IDLE,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_ERROR,
    STATE_FINISHED
} ProcessState;

typedef union {
    struct {
        int task_id;
        char description[32];
    } idle_info;
    struct {
        float progress;
        int elapsed_sec;
    } running_info;
    struct {
        char reason[32];
    } paused_info;
    struct {
        int error_code;
        char message[32];
    } error_info;
    struct {
        int total_time;
    } finished_info;
} ProcessData;

typedef struct {
    ProcessState state;
    ProcessData data;
} Process;

void print_process(const Process *p) {
    printf("Current state: ");
    switch (p->state) {
        case STATE_IDLE:
            printf("IDLE, task_id=%d, desc=%s\n",
                   p->data.idle_info.task_id,
                   p->data.idle_info.description);
            break;
        case STATE_RUNNING:
            printf("RUNNING, progress=%.1f%%, elapsed=%ds\n",
                   p->data.running_info.progress,
                   p->data.running_info.elapsed_sec);
            break;
        case STATE_PAUSED:
            printf("PAUSED, reason=%s\n", p->data.paused_info.reason);
            break;
        case STATE_ERROR:
            printf("ERROR, code=%d, msg=%s\n",
                   p->data.error_info.error_code,
                   p->data.error_info.message);
            break;
        case STATE_FINISHED:
            printf("FINISHED, total_time=%ds\n",
                   p->data.finished_info.total_time);
            break;
        default:
            printf("UNKNOWN\n");
    }
}

int main(void) {
    Process p;

    p.state = STATE_IDLE;
    p.data.idle_info.task_id = 101;
    strcpy(p.data.idle_info.description, "Download file");
    print_process(&p);

    p.state = STATE_RUNNING;
    p.data.running_info.progress = 37.5f;
    p.data.running_info.elapsed_sec = 15;
    print_process(&p);

    p.state = STATE_PAUSED;
    strcpy(p.data.paused_info.reason, "User pressed pause");
    print_process(&p);

    p.state = STATE_ERROR;
    p.data.error_info.error_code = -1;
    strcpy(p.data.error_info.message, "Network lost");
    print_process(&p);

    p.state = STATE_FINISHED;
    p.data.finished_info.total_time = 42;
    print_process(&p);

    return 0;
}
