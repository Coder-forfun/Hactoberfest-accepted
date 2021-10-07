def threeSum(nums):
    """
    return triplets i!=j i!=k j!=k
    """
    newArr=[]
    c=0
    for i in range(len(nums)):
        for j in range(len(nums)):
            for k in range(len(nums)):
                #if i!=j and i!=k and j!=k:
                    if int(len(nums)/3)<=c:
                        break
                    if nums[i]+nums[j]+nums[k]==0 :
                        newArr.append([nums[i],nums[j],nums[k]])
                        c=c+1
    return newArr

print(threeSum([[0,-1,1]]))
                         
    