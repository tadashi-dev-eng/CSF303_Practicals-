def main():
    row = col = None

    for i in range(1, 6):
        values = list(map(int, input().split()))
        for j, x in enumerate(values, start=1):
            if x == 1:
                row = i
                col = j

    moves = abs(row - 3) + abs(col - 3)
    print(moves)


if __name__ == "__main__":
    main()

