t = int(input())

for _ in range(t):
    n, c, d = map(int, input().split())
    elements = list(map(int, input().split()))

    square = [[0 for _ in range(n)] for _ in range(n)]
    square[0][0] = elements[0]

    for i in range(1, n):
        for j in range(1, n):
            square[i][j] = square[i - 1][j] + d if square[i - 1][j] + d == square[i][j - 1] + c else square[i][j - 1]

    index = 0
    for i in range(n):
        for j in range(n):
            if square[i][j] != elements[index]:
                print("NO")
                break
            index += 1
        else:
            continue
        break
    else:
        print("YES")
