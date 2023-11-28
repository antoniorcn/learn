import math
def average_distance( points ):
    soma = 0
    count = 0
    for i in range(len(points)):
        point = points[i]
        for j in range(i + 1, len(points)):
            comp_point = points[j]
            # print("Comparing point {} with point {}".format(i, j))
            dist_x = abs(point[0] - comp_point[0])
            dist_y = abs(point[1] - comp_point[1])
            distance = math.sqrt( dist_x ** 2 + dist_y ** 2 )
            soma += distance
            count += 1
    return soma / count


print(average_distance( [(10, 10), (20, 20), (30, 30)]))



