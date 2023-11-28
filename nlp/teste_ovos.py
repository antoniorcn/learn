import matplotlib.pyplot as plt
import csv
file = open('ovos.csv', 'r')
spamreader = csv.reader(file, delimiter=',', quotechar='"')
total = []
x = []
for indice, row in enumerate(spamreader):
    if indice > 0:
        x.append(indice)
        print(row[1])
        total.append(int(row[1]))
print(x)
plt.scatter(x, total)
plt.show()