 def jobScheduling(self, startTime: List[int], endTime: List[int], profit: List[int]) -> int:
        #sorting by startTime
        events = sorted(zip(startTime, endTime, profit))
        n = len(startTime)
      
        def dp(idx):
            if idx == n: return 0
            
            starting, ending, val = events[idx]
            
            #use binary search to find the next non overlapping event
            L = idx; R = n-1
            while L < R:
                M = (L+R)//2
                
                if events[M][0] >= ending:
                    R = M
                else:
                    L = M+1
            
            #curr event can be attended no matter what
            ans = val
            #if u can also attend fututre events including curr event
            if events[L][0] >= ending:
                ans += dp(L)
            #you can also choose to skip this event
            return max(ans, dp(idx+1))
        
        # return dp(0)
        
        #iterative approach
        events = sorted(zip(startTime, endTime, profit), key=lambda x: x[1]) #sorting by ending time
        n = len(events)
        #iterative approach
        dp = [0]*n
        for i in range(n):
            start, ending, val = events[i]
            
            #u can always attend curr_event
            ans = val
            
            #find events that u could have attend before starting curr_event
            L = 0; R = i
            while L < R:
                M = (L+R+1)//2
                
                if events[M][1] <= start:
                    L = M
                else:
                    R = M-1
            
            if events[L][1] <= start:
                ans += dp[L]
                
            dp[i] = ans
            #not attending curr event can be a better choice
            if i: dp[i] = max(ans, dp[i-1])
        
        return dp[-1]
