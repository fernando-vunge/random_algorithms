def highest_produ(matrix):
    horizontal_product = 1
    vertical_product = 1
    highest_product = 1

    for c in range(0,len(matrix[0])):
        for row in matrix:
            vertical_product *= row[c]
            for columm in row:
                if(columm != 0):
                    horizontal_product *= columm
            if(horizontal_product >= highest_product):
                highest_product = horizontal_product
            horizontal_product = 1
        if(vertical_product >= highest_product):
            highest_product = vertical_product
        vertical_product = 1
    return highest_product


matrix = [[2, 1, 4, 1], [0, 4, 8, 1], [1, 0, 10, 0]]
result = highest_produ(matrix)
print(result)
