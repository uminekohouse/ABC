import numpy as np
from scipy.special import comb
from decimal import Decimal, ROUND_HALF_UP, ROUND_HALF_EVEN
import math

def ExpectedValue(ep, List):
    res = 0
    x = List[0]
    y = List[1]
    x = int(x)
    y = int(y)
    for i in range(0, x+1):
        res += comb(x,i)*((1.0-ep)**i)*(ep**(x-i))*i 
    for i in range(0, y+1):
        res += comb(y,i)*((ep)**i)*((1.0-ep)**(y-i))*i 
    #print("ep", ep, "x", x, "y", y , "res", int(res))
    return res    

def GetScore(List, M, ep, times):
    cnt = 0
    for i in range(0, M):
        one = ExpectedValue(ep, List[i])
        #print("one", one, "floor(one/time)", math.floor(one/times), "i", i)
        if(int(one/times) != i):
            cnt += 1
    score = (10.0**9)*(0.9**cnt)/M
    score = round(score)
    #print("ep", ep, "M", M, "times", times, "score", score)
    return score


def CalTimes(M, ep):
        high_score = 0.0
        best_times = 1
        List = [[0]*2 for i in range(M)]
        for times in range(1, 41):
            N = np.sqrt(2*times*M)
            N = int(N)
            while(N*(N-1)<2*times*M):
                N = N+1
            graph_size = N*(N-1)/2
            for i in range(0, M):
                List[i][0] = i*times
                List[i][1] =  graph_size - i*times
            score = GetScore(List, M, ep, times)
            if(score > high_score):
                high_score = score
                best_times = times

        return best_times       

for M in range(25, 101):
    best_times = 1
    for ep in np.arange(0.00, 0.41, 0.01):
        times = CalTimes(M, ep);
        if(times >= best_times and times - best_times <= 10):
            best_times = times
        print("M", M, "ep", ep, "times", best_times)



