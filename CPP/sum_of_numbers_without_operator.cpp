int getSum(int a, int b) {
        while(b)
        {
            unsigned c=(a&b);
            a=a^b;
            b=c<<1;
        }
        return a;
    }
   int main()
   {
      int a,b;
      cin>>a>>b;
     cout<<getSum(a,b);
   }
