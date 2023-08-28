import sys
input = sys.stdin.readline

N, M = map(int, input().split())

dic = {}
for _ in range(N) : 
  site, pwd = input().split()
  dic[site] = pwd

for _ in range(M):
  print(dic[input().rstrip()])