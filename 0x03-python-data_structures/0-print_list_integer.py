#!/usr/bin/python3
def print_list_integer(my_list=[]):
# loop through each element in the list
for num in my_list:
# check if the element is an integer
if type(num) == int:
# print the element
print(num)
