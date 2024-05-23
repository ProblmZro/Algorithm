N, M = map(int, input().split())
trees = list(map(int, input().split()))
start = 0
end = max(trees)

while start <= end:
  mid = (start + end) // 2

  heights = 0
  for tree in trees:
    if tree >= mid:
      heights += tree - mid

  if heights >= M:
    start = mid + 1
  else:
    end = mid - 1

print(end)