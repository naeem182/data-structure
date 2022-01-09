    #include<stdio.h>
    #include<stdbool.h>
    #define max 5

    int queue[max];
    int f=0,r=-1,c=0;
    bool full()
        {
            if(c==max)
            {
                return true;
            }
            return false;
        }
    bool empty()
    {
        if(c==0)
        {
            return true;
        }
        return false;
    }

    int enqueue(int item)
    {
        if(full())
        {
            printf("\n  sorry, the queue is full.\n");
            return;
        }
        r=(r+1)%max;
        queue[r]=item;
        c++;

    }
    int dequeue()
    {
        if(empty())
        {
            printf("sorry,the queue is empty.\n");
            return -1;
        }
        int fitem=queue[f];
        queue[f]=-1;
        f=(f+1)%max;
        c--;
      return fitem;
    }

    void qprint()
    {
        int i;
         printf("\n queue:");
         for(i=0;i<max;i++)
         {
              printf(" %d",queue[i]);
         }
         printf("\n");
    }

    int main()
    {
        printf("\n  implement our queue:");
        enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(40);
         qprint();
        enqueue(50);
        qprint();
        enqueue(60);
       qprint();

         printf("dequeue:%d\n",dequeue());
          qprint();
        enqueue(60);
         qprint();

        return 0;

    }
