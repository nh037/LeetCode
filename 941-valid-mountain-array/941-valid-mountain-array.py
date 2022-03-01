class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        up=0;
        down=0
        for i in range(0,len(arr)-1):
            if(arr[i]<arr[i+1]):
                if(down!=0):
                    return False
                up+=1
            elif(arr[i]>arr[i+1]):
                if(up==0):
                    return False
                down+=1
            else:
                return False
        return (up!=0 and down!=0)
              
             