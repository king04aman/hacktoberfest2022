void sort(int arr[],int n){
   for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                int temp =  arr[i];
                arr[i] = arr[j];        
                arr[j] = temp;
            }
        }
    }
}
int getMissingElement(int* a,int a_size,int* b ,int b_size){
  	sort(a,a_size);
    sort(b,b_size);
    for (int i = 0; i < b_size; i++)
    {
        if(a[i] != b[i]){
            return a[i];
        }
    }
    return a[a_size-1];
}
