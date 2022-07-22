class Solution:
    def minimumXORSum(self, x: List[int], y: List[int]) -> int:
        f=lru_cache(None)(lambda i,v:0 if v==2**len(x)-1 else min((y[j]^x[i])+f(i+1,v|(1<<j)) for j in range(len(x)) if (v>>j)&1==0))
        return f(0,0)