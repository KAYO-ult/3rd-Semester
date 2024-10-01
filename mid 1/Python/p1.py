n = int(input("Enter number of rows = "))
m = int(input("Enter number of coulombs = "))

for i in range(n):                            #rows
    for j in range(m):                        #coulombs
        print("*", end = " ")
    print()

# * * * * *
# * * * * *
# * * * * *




n = int(input("Enter number of rows = "))
# m = int(input("Enter number of coulombs = "))

for i in range(n):                            #rows
    for j in range(i + 1):                    #coulombs
        print("*", end = " ")
    print()

# *
# * *
# * * *
# * * * *
# * * * * *   


    


n = int(input("Enter number of rows = "))
# m = int(input("Enter number of coulombs = "))

for i in range(n):                            #rows
    for j in range(n - i):                    #coulombs
        print("*", end = " ")
    print()

# * * * * *
# * * * *
# * * *
# * *
# *    






# n = int(input("Enter number of rows = "))
# # m = int(input("Enter number of coulombs = "))

# for i in range(n):                            #rows
#     for j in range(i + 1):                    #coulombs
#         print(chr(65+)+'', end = " ")
#     print()     