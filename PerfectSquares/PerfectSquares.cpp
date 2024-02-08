class Solution 
{  
    private:

        bool isSquare(int n)
        {  
            int sqrt_n = (int)(sqrt(n));  
            return (sqrt_n*sqrt_n == n);  
        }
        
    public:

        int numSquares(int n)
        {  
            if(isSquare(n) == true) 
                return 1;   
            while ((n & 3) == 0)
                n >>= 2;  
            if ((n & 7) == 7)
                return 4;
            int sqrtN = (int)(sqrt(n)); 
            for(int i = 1; i <= sqrtN; i++)
            {  
                if (isSquare(n - pow(i, 2)) == true)
                    return 2;  
            }  
            return 3;  
        }  
}; 
