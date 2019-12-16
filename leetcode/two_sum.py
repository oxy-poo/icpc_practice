def twoSum(nums,target):
    a = nums.sort()
    start = 0
    end = len(nums) -1
    t = a[start] + a[end]
    while t != target:
        t = a[start] + a[end]
        if t > target:
            end-=1
        if t < target:
            start+=1
    return [nums.find(a[start]),nums.find(a[end])]

print(twoSum([3,2,4],6))
