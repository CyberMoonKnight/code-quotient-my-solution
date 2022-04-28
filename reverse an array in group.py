def reverseSubarray(arr,n,k):
      i = 0
      while i < n:
        l = i
        r = min(i+k-1, n-1)
        while l < r:
          temp = arr[l]
          arr[l] = arr[r]
          arr[r] = temp
          l += 1
          r -= 1
        i += k
      return arr
