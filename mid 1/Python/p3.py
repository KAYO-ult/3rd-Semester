# # create two lists with college id and name
# roll_no = [1, 2, 3, 4, 5]
# name = ['sravan', 'ojaswi', 'bobby', 'rohith', 'gnanesh']

# # zip the two lists using zip() function
# data = tuple(zip(roll_no, name))

# #display
# print(data)

list = [1, 2, 3, 4]
print((*list,))

for i in range(1, 10, 2):
    for j in range(i):
        print(i, end=' ')
    print()

lst = [1, 2, 3, 4, 5]
lst.remove(3)
print(lst)
