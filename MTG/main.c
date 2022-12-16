print("please enter the table size: ")
n = int(input())
count = 1
print("    ", end=" ")

for i in range(1, n + 1):
    print("{0:>4n}".format(i), end="")

print()

print("    +" + (n) * 4 * "-")

for x in range(1, n + 1):

    print("{0:>4n}".format(count), end="|")
    count = count + 1
    for y in range(1, n + 1):
        print(end="")

        print("{0:>4n}".format(x * y), end="")

    print()
