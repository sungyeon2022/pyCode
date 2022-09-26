import heapq
def solution(scoville, K):
    heap = []
    for num in scoville:
        heapq.heappush(heap,num)
    mix = 0
    while heap[0]<K:
        try:
            heapq.heappush(heap, heapq.heappop(heap) + (heapq.heappop(heap) * 2))
        except IndexError:
            return -1
        mix += 1
    return mix