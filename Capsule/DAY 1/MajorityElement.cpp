class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    //Moore's Voting Algorithm
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int count=1;
        int index=0;
        for(int i=1; i<n; i++)
        {
            if(a[index]==a[i])
            {
                count++;
            }
            else
            {
                count--;
            }
            
            if(count==0)
            {
                count=1;
                index=i;
            }
        }
        
        //2ns step
        count=0;
        for(int i=0; i<n; i++)
        {
            if(a[index]==a[i])
            {
                count++;
            }
        }
        if(count>n/2)
        {
            return a[index];
        }
        else
        {
            return -1;
        }
    }
};