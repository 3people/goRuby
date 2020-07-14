for _ in range(int(input())):
    word = list(input().split())
    print(*word[2:], *word[:2])
