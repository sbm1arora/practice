for _ in range(int(input())):
    n = int(input())
    board = []
    for i in range(8):
        board.append(list("XXXXXXXX"))

    board[0][0] = "O"

    i = 1
    j = 0
    while n > 1:
        if i == 8:
            i = 0
            j += 1

        board[j][i] = "."
        n -= 1
        i += 1

    for line in board:
        print("".join(line))
