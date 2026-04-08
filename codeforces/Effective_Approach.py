n = int(input())
arr = list(map(int, input().split()))
m = int(input())
queries = list(map(int, input().split()))

# Create a map: element -> position (1-indexed)
position = {}
for i in range(n):
    position[arr[i]] = i + 1

vasya = 0
petya = 0

for q in queries:
    p = position[q]  # Find where this element is
    vasya += p
    petya += n - p + 1

print(vasya, petya)