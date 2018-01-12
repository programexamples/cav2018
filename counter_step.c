extern void read_reset(int * reset);
extern void read_event(int * event);

/* Summary:
 *
 * reset = reset0 and event = event0 and max = max0 and cnt = 0
 * and reset >= 1
 *
 * cnt = cnt0 and reset = reset0 and event = event0 and max = max0
 * and reset <= 0 and event0 >= 1 and cnt >= max0
 *
 * cnt = cnt0+1 and reset = reset0 and event = event0 and max = max0
 * and cnt <= max0 and reset <= 0 andd event0 >= 1
 *
 * cnt = cnt0 and reset = reset0 and event = event0 and max = max0
 * adn reset <= 0 and event0 <= 0
 *
 */
void counter_step(int * cnt, int reset, int event, int max)
{
    if(reset >= 1)
    {
        *cnt = 0;
    }
    else if(event >= 1 && *cnt < max)
    {
        *cnt = *cnt + 1;
    }
}

void counter_init(int * cnt)
{
    *cnt = 0;
}

void severt_meter(int max)
{
    int cnt1;
    int reset;
    int event;

    if(max < 0)
        return;

    counter_init(&cnt1);

    while(1)
    {
        /* invariant: cnt1 >= 0 and cnt1 <= max */

        read_reset(&reset);
        read_event(&event);

        counter_step(&cnt1, reset, event, max);
    }
}
