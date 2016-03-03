#include <stdio.h>
#include "Defs.h"

/* try connecting to ip over # of times*/
int try_connect(char ip[], int no_of_times)
{


}

/* thead function where the work will be done */
void *function(void *arg)
{

/* read from the file ip list and try connecting those ip's */
        try_connect();
        while(1)
        {

                /* wait for message from mailbox */

                COMM_MESSAGE *msg = rcv();

                if(msg->command < 1000)
                {

                        switch(msg->command)
                        {
                                case COMM_CONFIG_SET:

                                case COMM_DISCONNECT:



                        }
                }

else /* send data on tcp */
                {

                                _send(msg->ptr);
                }

        }

}
              
